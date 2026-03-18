/*
 * XREFs of VidSchiSignalFlipEvents @ 0x1C0015B60
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00159E8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0012164 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiSignalFlipEvents(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbp
  int v4; // edi
  __int64 v7; // rbx
  char v8; // cl
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  struct _KEVENT *v19; // rax
  struct _KEVENT *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  LOWORD(v4) = a3;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 32);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v3 + 120));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v3 + 136));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1592));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1576));
    *(_QWORD *)(v7 + 1424) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1392), 0, 0);
    *(_QWORD *)(v7 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1504), 0, 0);
    if ( a2 )
    {
      *(_QWORD *)(v7 + 1144) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v7 + 1112), 0, 0);
    }
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1608));
    if ( *(_WORD *)(a1 + 33156) )
    {
      while ( (_WORD)v4 )
      {
        v8 = -1;
        v9 = !_BitScanForward((unsigned int *)&v10, (unsigned __int16)v4);
        v11 = 0;
        if ( !v9 )
          v8 = v10;
        v12 = v8;
        if ( *(_WORD *)(a1 + 33154) )
        {
          v13 = ((__int64)v8 << 6) + 51;
          do
          {
            v14 = v13 + v11;
            v15 = 6 * v14;
            v16 = *(_QWORD *)(a1 + 48 * v14);
            if ( v16 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 32), &LockHandle);
              v17 = (_QWORD *)(v16 + 16);
              v18 = *(_QWORD **)(v16 + 16);
              if ( v18 != v17 )
              {
                v19 = (struct _KEVENT *)(v7 + 1112);
                do
                {
                  v20 = (struct _KEVENT *)v18[2];
                  if ( v20 != v19 )
                  {
                    KeSetEvent(v20, 0, 0);
                    v19 = (struct _KEVENT *)(v7 + 1112);
                  }
                  v18 = (_QWORD *)*v18;
                }
                while ( v18 != v17 );
              }
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v13 = (v12 << 6) + 51;
              *(_QWORD *)(a1 + 8 * v15) = 0LL;
            }
            ++v11;
          }
          while ( v11 < *(unsigned __int16 *)(a1 + 33154) );
        }
        v4 = (unsigned __int16)v4 & ~(1 << v12);
      }
    }
  }
}
