/*
 * XREFs of MiIncreaseAvailablePages @ 0x14009CE20
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  signed int v4; // r14d
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct _KEVENT *v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  struct _KEVENT *v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]

  if ( a2 != 1 )
  {
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7296), a2);
    v4 = 0;
    v5 = a2 + v3;
    v6 = 0;
    if ( v3 < 0xA0 && v5 >= 0xA0 )
      v6 = 2;
    if ( v3 < 0x22 && v5 >= 0x22 )
      v6 |= 1u;
    if ( v3 < 0x420 && v5 >= 0x420 )
      v6 |= 4u;
    if ( v6 )
    {
      v15 = a1 + 4864;
      v14 = 0LL;
      KxAcquireQueuedSpinLock(&v14);
      v9 = (struct _KEVENT *)(a1 + 4896);
      do
      {
        if ( _bittest(&v6, v4) )
        {
          KeSetEvent(v9 - 1, 0, 0);
          ++v9->Header.LockNV;
        }
        ++v4;
        v9 = (struct _KEVENT *)((char *)v9 + 32);
      }
      while ( v4 < 3 );
      KxReleaseQueuedSpinLock(&v14);
    }
    v7 = *(_QWORD *)(a1 + 6128);
    if ( v3 <= v7 && v5 > v7 )
      goto LABEL_34;
    v8 = *(_QWORD *)(a1 + 6120);
    if ( v3 <= v8 && v5 > v8 )
      goto LABEL_34;
    return;
  }
  v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 7296));
  if ( v10 <= 0x420 )
  {
    switch ( v10 )
    {
      case 0xA0uLL:
        v11 = 4904LL;
LABEL_23:
        v12 = (struct _KEVENT *)(a1 + v11);
        v15 = a1 + 4864;
        v14 = 0LL;
        KxAcquireQueuedSpinLock(&v14);
        KeSetEvent(v12, 0, 0);
        ++v12[1].Header.LockNV;
        KxReleaseQueuedSpinLock(&v14);
        break;
      case 0x420uLL:
        v11 = 4936LL;
        goto LABEL_23;
      case 0x22uLL:
        v11 = 4872LL;
        goto LABEL_23;
    }
  }
  v13 = v10 - 1;
  if ( v13 == *(_QWORD *)(a1 + 6120) || v13 == *(_QWORD *)(a1 + 6128) )
LABEL_34:
    MiUpdateAvailableEvents(a1);
}
