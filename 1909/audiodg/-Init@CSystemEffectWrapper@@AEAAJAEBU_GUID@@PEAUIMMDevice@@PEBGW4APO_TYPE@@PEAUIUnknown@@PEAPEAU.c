/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1400083C0
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140007E30 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140042E44 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Init(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        char *a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  char *v7; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  HRESULT Instance; // esi
  SIZE_T v13; // rax
  _WORD *v14; // rax
  _WORD *v15; // r9
  unsigned __int64 v16; // rax
  _WORD *v17; // rdx
  int v18; // r10d
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  char *v21; // rdi
  __int16 v22; // cx
  unsigned __int64 v23; // r14

  v7 = a4;
  *(IID *)(a1 + 104) = *a2;
  *(_DWORD *)(a1 + 128) = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&a4[2 * v10] );
  *(_QWORD *)(a1 + 120) = 0LL;
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v11 = -1LL;
    Instance = -2147024362;
  }
  else
  {
    Instance = 0;
  }
  if ( Instance < 0 )
    goto LABEL_26;
  v13 = 2 * v11;
  if ( is_mul_ok(v11, 2uLL) )
  {
    Instance = 0;
  }
  else
  {
    v13 = -1LL;
    Instance = -2147024362;
  }
  if ( Instance < 0 )
    goto LABEL_26;
  v14 = CoTaskMemAlloc(v13);
  v15 = v14;
  *(_QWORD *)(a1 + 120) = v14;
  Instance = v14 ? 0 : -2147024882;
  if ( Instance < 0 )
    goto LABEL_26;
  if ( !v14 && v11 || v11 > 0x7FFFFFFF )
    goto LABEL_38;
  if ( v10 >= 0x7FFFFFFF )
  {
    if ( !v11 )
      goto LABEL_26;
LABEL_38:
    *v14 = 0;
    goto LABEL_26;
  }
  if ( !v7 )
  {
    v7 = (char *)&unk_14006AAF0;
    v10 = 0LL;
  }
  if ( v11 )
  {
    v16 = v11;
    v17 = v15;
    v18 = 0;
    v19 = 0LL;
    v20 = v10 - v11;
    v21 = (char *)(v7 - (char *)v15);
    do
    {
      if ( !(v20 + v16) )
        break;
      v22 = *(_WORD *)((char *)v17 + (_QWORD)v21);
      if ( !v22 )
        break;
      *v17++ = v22;
      ++v19;
      --v16;
    }
    while ( v16 );
    if ( !v16 )
    {
      --v17;
      --v19;
      v18 = -2147024774;
    }
    *v17 = 0;
    v23 = v11 - v19;
    if ( v18 >= 0 && v23 > 1 && 2 * v23 > 2 )
      memset_0(&v15[v19 + 1], 0, 2 * v23 - 2);
  }
LABEL_26:
  if ( Instance >= 0 )
  {
    Instance = CoCreateInstance(
                 a2,
                 (LPUNKNOWN)(a1 + 8),
                 1u,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 (LPVOID *)(a1 + 96));
    if ( Instance >= 0 )
      *a7 = a1 + 8;
  }
  return (unsigned int)Instance;
}
