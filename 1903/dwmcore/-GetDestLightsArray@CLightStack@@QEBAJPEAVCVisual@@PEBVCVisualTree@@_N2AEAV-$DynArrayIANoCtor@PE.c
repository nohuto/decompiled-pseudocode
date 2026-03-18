/*
 * XREFs of ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x180179FA0
 * Callers:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x180179F20 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdx
  char v16; // r10
  __int64 v17; // rcx
  unsigned int i; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edx
  signed int v23; // ebx
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = *((_DWORD *)a1 + 6);
  v12 = 0;
  v13 = a6;
  if ( v11 )
  {
    v14 = *((_DWORD *)a1 + 6);
    while ( 1 )
    {
      v15 = *a1;
      v16 = 1;
      if ( *(_DWORD *)(*a1 + 16LL * v12 + 8) != 1 )
        break;
LABEL_35:
      if ( ++v12 >= v14 )
        goto LABEL_36;
    }
    v17 = 0LL;
    if ( *(_DWORD *)(v13 + 24) )
    {
      while ( *(_QWORD *)(*(_QWORD *)v13 + 8 * v17) != *(_QWORD *)(v15 + 16LL * v12) )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v13 + 24) )
          goto LABEL_11;
      }
      v16 = 0;
    }
LABEL_11:
    for ( i = v12 + 1; i < v11; ++i )
    {
      if ( *(_DWORD *)(v15 + 16LL * i + 8) == 1 && *(_QWORD *)(v15 + 16LL * v12) == *(_QWORD *)(v15 + 16LL * i) )
      {
        v16 = 0;
        break;
      }
    }
    if ( !v16 )
      goto LABEL_34;
    v19 = *(_QWORD *)(v15 + 16LL * v12);
    v27 = v19;
    if ( !a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 29LL) )
        goto LABEL_32;
      v19 = v27;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 264LL))(v19)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 256LL))(v27, a3, a2) )
    {
      v21 = *(_DWORD *)(v13 + 24);
      v22 = v21 + 1;
      if ( v21 + 1 < v21 )
      {
        v23 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        goto LABEL_30;
      }
      if ( v22 > *(_DWORD *)(v13 + 20) )
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet(v13, 8, 1, &v27);
        v23 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v25, 0xC3u, 0LL);
LABEL_30:
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x11Au, 0LL);
          return (unsigned int)v23;
        }
        goto LABEL_34;
      }
      *(_QWORD *)(*(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 24)) = v27;
      *(_DWORD *)(v13 + 24) = v22;
LABEL_34:
      v11 = *((_DWORD *)a1 + 6);
      v14 = v11;
      goto LABEL_35;
    }
LABEL_32:
    if ( v7 )
      *v7 = 0;
    goto LABEL_34;
  }
LABEL_36:
  if ( *(_DWORD *)(v13 + 24) && v7 )
    *v7 = 1;
  return 0;
}
