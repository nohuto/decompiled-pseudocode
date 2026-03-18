/*
 * XREFs of ?GetDestLightsArray@CLightStack@@AEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x180179E28
 * Callers:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x180179DA8 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rdx
  char v17; // r10
  __int64 v18; // rcx
  unsigned int i; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // ebx
  int v24; // eax
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+20h]

  LOBYTE(v27) = a4;
  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = *((_DWORD *)a1 + 6);
  v12 = 0;
  v13 = a6;
  if ( v11 )
  {
    v14 = v27;
    v15 = *((_DWORD *)a1 + 6);
    while ( 1 )
    {
      v16 = *a1;
      v17 = 1;
      if ( *(_DWORD *)(*a1 + 16LL * v12 + 8) != 1 )
        break;
LABEL_37:
      if ( ++v12 >= v15 )
        goto LABEL_38;
    }
    v18 = 0LL;
    if ( *(_DWORD *)(v13 + 24) )
    {
      while ( *(_QWORD *)(*(_QWORD *)v13 + 8 * v18) != *(_QWORD *)(v16 + 16LL * v12) )
      {
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24) )
          goto LABEL_11;
      }
      v17 = 0;
    }
LABEL_11:
    for ( i = v12 + 1; i < v11; ++i )
    {
      if ( *(_DWORD *)(v16 + 16LL * i + 8) == 1 && *(_QWORD *)(v16 + 16LL * v12) == *(_QWORD *)(v16 + 16LL * i) )
      {
        v17 = 0;
        break;
      }
    }
    if ( !v17 )
    {
LABEL_36:
      v11 = *((_DWORD *)a1 + 6);
      v15 = v11;
      goto LABEL_37;
    }
    v20 = *(_QWORD *)(v16 + 16LL * v12);
    v26 = v20;
    if ( !a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 29LL) )
      {
LABEL_34:
        if ( v7 )
          *v7 = 0;
        goto LABEL_36;
      }
      v20 = v26;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 224LL))(v20)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 216LL))(v26, a3, a2) )
    {
      v21 = *(unsigned int *)(v13 + 24);
      v22 = v21 + 1;
      if ( (int)v21 + 1 >= (unsigned int)v21 )
        v14 = v21 + 1;
      v23 = v22 < (unsigned int)v21 ? 0x80070216 : 0;
      if ( v22 < (unsigned int)v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v23, 0xB5u);
      }
      else if ( v14 > *(_DWORD *)(v13 + 20) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet(v13, 8, 1, &v26);
        v23 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v13 + 8 * v21) = v26;
        *(_DWORD *)(v13 + 24) = v14;
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v23, 0x11Au);
        return (unsigned int)v23;
      }
      goto LABEL_36;
    }
    goto LABEL_34;
  }
LABEL_38:
  if ( *(_DWORD *)(v13 + 24) && v7 )
    *v7 = 1;
  return 0;
}
