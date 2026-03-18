/*
 * XREFs of ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18022F338
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18022CDAC (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18022E858 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x18022FA40 (_anonymous_namespace_--ConvertVectorArrayToMatrix.c)
 */

__int64 __fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h]
  __int64 *v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v23[4]; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+90h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int64 **v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  __int64 *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  __int64 v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  __int64 v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  __int64 v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  __int64 v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  __int64 v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  __int64 v54; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]

  v3 = *((_DWORD *)a3 + 6) - 1;
  v4 = v3;
  v24 = 0;
  memset(v23, 0, sizeof(v23));
  v8 = 0;
  if ( v3 >= 0 )
  {
    v9 = 16LL * v3;
    do
    {
      if ( v8 >= 3 )
        break;
      v10 = *a3;
      v11 = *(_DWORD *)(v9 + *a3 + 8);
      v17 = *(_QWORD *)(v9 + *a3);
      LODWORD(v18) = v11;
      if ( anonymous_namespace_::CanAddThisColumnVectorToMatrix((float *)v23, v8, (__int64)&v17) )
      {
        v12 = v8++;
        v13 = 3 * v12;
        LODWORD(v12) = *(_DWORD *)(v9 + v10 + 8);
        *(_QWORD *)((char *)v23 + 4 * v13) = *(_QWORD *)(v9 + v10);
        *((_DWORD *)&v23[1] + v13) = v12;
      }
      v9 -= 16LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  anonymous_namespace_::ConvertVectorArrayToMatrix(a2, v23);
  if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v19 = a1;
    v26 = &v19;
    v20 = *a1;
    v28 = &v20;
    v21 = a1[20];
    v30 = &v21;
    v22 = a1[40];
    v32 = &v22;
    v17 = a1[60];
    v34 = &v17;
    LODWORD(v16) = *((_DWORD *)a1 + 197);
    v36 = &v16;
    v40 = a2 + 4;
    v42 = a2 + 8;
    v44 = a2 + 16;
    v46 = a2 + 20;
    v48 = a2 + 24;
    v50 = a2 + 32;
    v52 = a2 + 36;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 8LL;
    v37 = v14;
    v38 = a2;
    v39 = v14;
    v41 = v14;
    v43 = v14;
    v45 = v14;
    v47 = v14;
    v49 = v14;
    v51 = v14;
    v53 = v14;
    v54 = a2 + 40;
    v55 = v14;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DC9B6, 0LL, 0LL, 0x11u, &pData);
  }
  return a2;
}
