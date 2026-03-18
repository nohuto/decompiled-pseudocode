/*
 * XREFs of ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C02102E8
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020FC7C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?Free@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0210214 (-Free@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02D2850 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C02D2940 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 *v6; // rbp
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  void *v12; // r8

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      v5 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 == a1 )
      {
LABEL_18:
        ExReleasePushLockSharedEx(v4, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
        return;
      }
      while ( 1 )
      {
        v6 = (__int64 *)v5[4];
        v7 = v6[1] ^ v6[2];
        if ( (unsigned __int64)a2 < v7 || (unsigned __int64)a2 >= v7 + 24576 )
        {
          v8 = 0;
        }
        else if ( ((unsigned __int16)a2 & 0xFFF) == 96 * (((unsigned __int16)a2 & 0xFFFu) / 0x60uLL) )
        {
          v8 = 2
             - (RtlTestBit(
                  (PRTL_BITMAP)(v6[2] ^ v6[3]),
                  42 * (((unsigned int)a2 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12)
                + ((unsigned __int16)a2 & 0xFFFu) / 0x60) != 0);
        }
        else
        {
          v8 = 3;
        }
        if ( !v8 )
          goto LABEL_17;
        v9 = v8 - 1;
        if ( !v9 )
        {
          NSInstrumentation::CSectionBitmapAllocator<24576,96>::Free(v6, a2);
          ExReleasePushLockSharedEx(v4, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v10 = v9 - 1;
        if ( !v10 )
          break;
        if ( v10 == 1 )
        {
          v11 = 2LL;
LABEL_16:
          NSInstrumentation::PlatformAbort(v11, a2, 0LL);
        }
LABEL_17:
        v5 = (_QWORD *)*v5;
        if ( v5 == (_QWORD *)a1 )
          goto LABEL_18;
      }
      v11 = 1LL;
      goto LABEL_16;
    }
    memset(a2, 0, 0x60uLL);
    NSInstrumentation::PlatformFreeToPagedLookasideList(*(PSLIST_HEADER *)(a1 + 24), a2, v12);
  }
}
