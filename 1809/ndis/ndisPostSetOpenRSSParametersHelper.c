/*
 * XREFs of ndisPostSetOpenRSSParametersHelper @ 0x1C001FDB4
 * Callers:
 *     ndisPostSetOpenRSSParameters @ 0x1C001FD18 (ndisPostSetOpenRSSParameters.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00804A8 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

void __fastcall ndisPostSetOpenRSSParametersHelper(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // esi
  KSPIN_LOCK *v8; // rbx
  int v9; // r12d
  __int16 v10; // r13
  KIRQL v11; // al
  __int64 v12; // rbp
  _DWORD *v13; // rcx
  void *v14; // rcx
  int v15; // ebx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h]

  v6 = *(_DWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 12);
  if ( *(_BYTE *)(a3 + 1) < 2u )
    v7 = 0;
  else
    v7 = *(_DWORD *)(a3 + 28) + *(_DWORD *)(a3 + 32) * *(_DWORD *)(a3 + 36);
  v8 = (KSPIN_LOCK *)(a1 + 96);
  v9 = (unsigned __int8)*(_DWORD *)(a3 + 8);
  if ( v6 <= *(_DWORD *)(a3 + 24) + (unsigned int)*(unsigned __int16 *)(a3 + 20) )
    v6 = *(_DWORD *)(a3 + 24) + *(unsigned __int16 *)(a3 + 20);
  if ( v6 > v7 )
    v7 = v6;
  v10 = *(_WORD *)(a3 + 4) & 0x10;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v12 = *(_QWORD *)(a1 + 56);
  NewIrql = v11;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2306206;
  if ( v12 )
  {
    do
    {
      v13 = *(_DWORD **)(v12 + 488);
      if ( v13 && v12 != a2 )
      {
        if ( !v9 || v10 )
        {
          *(_QWORD *)(v12 + 488) = 0LL;
        }
        else
        {
          v15 = v13[2] & 0xFFFF00;
          memmove(v13, (const void *)a3, v7);
          *(_DWORD *)(*(_QWORD *)(v12 + 488) + 8LL) = v9 | v15;
        }
      }
      v12 = *(_QWORD *)(v12 + 392);
    }
    while ( v12 );
    v8 = (KSPIN_LOCK *)(a1 + 96);
  }
  if ( !v9 || v10 )
  {
    *(_QWORD *)(a2 + 488) = 0LL;
  }
  else
  {
    v14 = *(void **)(a2 + 480);
    *(_QWORD *)(a2 + 488) = v14;
    memmove(v14, (const void *)a3, v7);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock(v8, NewIrql);
}
