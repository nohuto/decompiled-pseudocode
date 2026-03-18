/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C0034AA4
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0033F08 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0036FF8 (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001CFB0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0076774 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        unsigned __int8 a2,
        void **a3)
{
  _OWORD *v3; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // ebx
  __int128 v16; // xmm1
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // eax
  struct _ACL *v20; // rdi
  char *v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  struct _ACL *v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  struct _ACL *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  _DWORD v40[72]; // [rsp+90h] [rbp-70h] BYREF
  char v41; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v42; // [rsp+2D0h] [rbp+1D0h]

  v3 = v40;
  v6 = 2LL;
  do
  {
    v7 = *((_OWORD *)a1 + 1);
    *v3 = *(_OWORD *)a1;
    v8 = *((_OWORD *)a1 + 2);
    v3[1] = v7;
    v9 = *((_OWORD *)a1 + 3);
    v3[2] = v8;
    v10 = *((_OWORD *)a1 + 4);
    v3[3] = v9;
    v11 = *((_OWORD *)a1 + 5);
    v3[4] = v10;
    v12 = *((_OWORD *)a1 + 6);
    v3[5] = v11;
    v13 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v3[6] = v12;
    v3 += 8;
    *(v3 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = *(_OWORD *)a1;
  v33 = 0LL;
  v15 = 0;
  v16 = *((_OWORD *)a1 + 1);
  *v3 = v14;
  v3[1] = v16;
  if ( v40[0] != 232 && (v40[0] != 288 || v40[58] > 4u) || v40[2] > 4u || v40[16] > 4u || v40[30] > 4u || v40[44] > 4u )
    v15 = -1073741811;
  if ( UserIsCurrentProcessDwm((__int64)a1) )
  {
    v17 = 0;
    v18 = 3;
  }
  else
  {
    v17 = -1073741824;
    v18 = -1073741824;
  }
  if ( v15 >= 0 )
  {
    v19 = UserAllocDefaultCompositionSecurityDescriptor(v17, &v33);
    v20 = v33;
    v15 = v19;
    if ( v19 >= 0 )
    {
      v35 = 0LL;
      v37 = 0;
      v36 = 0LL;
      v39 = 0LL;
      v34 = 48;
      v38 = v33;
      KeEnterCriticalRegion();
      v21 = &v41;
      v22 = 2LL;
      v23 = v40;
      do
      {
        v24 = v23[1];
        *(_OWORD *)v21 = *v23;
        v25 = v23[2];
        *((_OWORD *)v21 + 1) = v24;
        v26 = v23[3];
        *((_OWORD *)v21 + 2) = v25;
        v27 = v23[4];
        *((_OWORD *)v21 + 3) = v26;
        v28 = v23[5];
        *((_OWORD *)v21 + 4) = v27;
        v29 = v23[6];
        *((_OWORD *)v21 + 5) = v28;
        v30 = v23[7];
        v23 += 8;
        *((_OWORD *)v21 + 6) = v29;
        v21 += 128;
        *((_OWORD *)v21 - 1) = v30;
        --v22;
      }
      while ( v22 );
      v31 = v23[1];
      *(_OWORD *)v21 = *v23;
      *((_OWORD *)v21 + 1) = v31;
      v42 ^= (a2 ^ (unsigned __int8)v42) & 1;
      v15 = CompositionObject::Create(v42, &v34, v18);
      KeLeaveCriticalRegion();
      if ( v15 >= 0 )
        *a3 = (void *)-1LL;
    }
    if ( v20 )
      Win32FreePool((__int64)v20);
  }
  return (unsigned int)v15;
}
