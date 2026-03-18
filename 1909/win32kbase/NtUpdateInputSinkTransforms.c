/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C0001140
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00012C0 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, unsigned int a2)
{
  int v4; // edi
  unsigned int v5; // esi
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  PVOID v11; // r12
  PVOID v13; // [rsp+30h] [rbp-1C8h] BYREF
  PVOID Object[11]; // [rsp+38h] [rbp-1C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-168h] BYREF
  PVOID *v16; // [rsp+B0h] [rbp-148h]
  __int64 v17; // [rsp+B8h] [rbp-140h]
  PVOID *v18; // [rsp+C0h] [rbp-138h]
  __int64 v19; // [rsp+C8h] [rbp-130h]
  char *v20; // [rsp+D0h] [rbp-128h]
  __int64 v21; // [rsp+D8h] [rbp-120h]
  PVOID *v22; // [rsp+E0h] [rbp-118h]
  __int64 v23; // [rsp+E8h] [rbp-110h]
  char *v24; // [rsp+F0h] [rbp-108h]
  __int64 v25; // [rsp+F8h] [rbp-100h]
  PVOID *v26; // [rsp+100h] [rbp-F8h]
  __int64 v27; // [rsp+108h] [rbp-F0h]
  char *v28; // [rsp+110h] [rbp-E8h]
  __int64 v29; // [rsp+118h] [rbp-E0h]
  PVOID *v30; // [rsp+120h] [rbp-D8h]
  __int64 v31; // [rsp+128h] [rbp-D0h]
  char *v32; // [rsp+130h] [rbp-C8h]
  __int64 v33; // [rsp+138h] [rbp-C0h]
  PVOID *v34; // [rsp+140h] [rbp-B8h]
  __int64 v35; // [rsp+148h] [rbp-B0h]
  char *v36; // [rsp+150h] [rbp-A8h]
  __int64 v37; // [rsp+158h] [rbp-A0h]
  PVOID *v38; // [rsp+160h] [rbp-98h]
  __int64 v39; // [rsp+168h] [rbp-90h]
  char *v40; // [rsp+170h] [rbp-88h]
  __int64 v41; // [rsp+178h] [rbp-80h]
  PVOID *v42; // [rsp+180h] [rbp-78h]
  __int64 v43; // [rsp+188h] [rbp-70h]
  char *v44; // [rsp+190h] [rbp-68h]
  __int64 v45; // [rsp+198h] [rbp-60h]
  PVOID *v46; // [rsp+1A0h] [rbp-58h]
  __int64 v47; // [rsp+1A8h] [rbp-50h]
  char *v48; // [rsp+1B0h] [rbp-48h]
  __int64 v49; // [rsp+1B8h] [rbp-40h]

  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    v5 = 0;
    LODWORD(v13) = 0;
    while ( v4 >= 0 && v5 < a2 )
    {
      memset(&Object[1], 0, 0x50uLL);
      v6 = (_OWORD *)(a1 + 80LL * v5);
      if ( v6 + 5 < v6 || (unsigned __int64)(v6 + 5) > MmUserProbeAddress )
        v6 = (_OWORD *)MmUserProbeAddress;
      v7 = v6[1];
      v8 = v6[2];
      v9 = v6[3];
      v10 = v6[4];
      *(_OWORD *)&Object[1] = *v6;
      *(_OWORD *)&Object[3] = v7;
      *(_OWORD *)&Object[5] = v8;
      *(_OWORD *)&Object[7] = v9;
      *(_OWORD *)&Object[9] = v10;
      v4 = CompositionInputObject::ResolveHandle(Object[1], 2u, 1, (struct CompositionInputObject **)Object);
      if ( v4 >= 0 )
      {
        v11 = Object[0];
        CompositionInputObject::UpdateTransform(
          (CompositionInputObject *)Object[0],
          (const struct tagINPUT_TRANSFORM *)&Object[3]);
        if ( dword_1C020CB50 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 4uLL) )
          {
            v13 = v11;
            v16 = &v13;
            v17 = 8LL;
            v18 = &Object[3];
            v19 = 4LL;
            v20 = (char *)&Object[3] + 4;
            v21 = 4LL;
            v22 = &Object[4];
            v23 = 4LL;
            v24 = (char *)&Object[4] + 4;
            v25 = 4LL;
            v26 = &Object[5];
            v27 = 4LL;
            v28 = (char *)&Object[5] + 4;
            v29 = 4LL;
            v30 = &Object[6];
            v31 = 4LL;
            v32 = (char *)&Object[6] + 4;
            v33 = 4LL;
            v34 = &Object[7];
            v35 = 4LL;
            v36 = (char *)&Object[7] + 4;
            v37 = 4LL;
            v38 = &Object[8];
            v39 = 4LL;
            v40 = (char *)&Object[8] + 4;
            v41 = 4LL;
            v42 = &Object[9];
            v43 = 4LL;
            v44 = (char *)&Object[9] + 4;
            v45 = 4LL;
            v46 = &Object[10];
            v47 = 4LL;
            v48 = (char *)&Object[10] + 4;
            v49 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E6CE9, 0LL, 0LL, 0x13u, &pData);
          }
        }
        ObfDereferenceObject(v11);
      }
      LODWORD(v13) = ++v5;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
