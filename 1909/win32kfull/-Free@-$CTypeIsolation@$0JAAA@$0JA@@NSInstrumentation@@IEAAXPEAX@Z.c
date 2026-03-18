/*
 * XREFs of ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00E1764
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0035268 (--$FreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00E191C (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02D23A0 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C02D2490 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // r8

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      v7 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 == a1 )
      {
LABEL_18:
        ExReleasePushLockSharedEx(v4, 0LL, v5, v6);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
        return;
      }
      while ( 1 )
      {
        v8 = (_QWORD *)v7[4];
        v9 = v8[1] ^ v8[2];
        if ( (unsigned __int64)a2 < v9 || (unsigned __int64)a2 >= v9 + 36864 )
        {
          v10 = 0;
        }
        else
        {
          v6 = (unsigned __int16)a2 & 0xFFF;
          if ( v6 == 144 * (v6 / 0x90) )
            v10 = 2
                - (RtlTestBit(
                     (PRTL_BITMAP)(v8[2] ^ v8[3]),
                     28 * (((unsigned int)a2 - (*((_DWORD *)v8 + 2) ^ (unsigned int)v8[2])) >> 12)
                   + ((unsigned __int16)a2 & 0xFFFu) / 0x90) != 0);
          else
            v10 = 3;
        }
        if ( !v10 )
          goto LABEL_17;
        v11 = v10 - 1;
        if ( !v11 )
        {
          NSInstrumentation::CSectionBitmapAllocator<36864,144>::Free(v8, a2);
          ExReleasePushLockSharedEx(v4, 0LL, v14, v15);
          KeLeaveCriticalRegion();
          return;
        }
        v12 = v11 - 1;
        if ( !v12 )
          break;
        if ( v12 == 1 )
        {
          v13 = 2LL;
LABEL_16:
          NSInstrumentation::PlatformAbort(v13, a2, 0LL);
        }
LABEL_17:
        v7 = (_QWORD *)*v7;
        if ( v7 == (_QWORD *)a1 )
          goto LABEL_18;
      }
      v13 = 1LL;
      goto LABEL_16;
    }
    memset(a2, 0, 0x90uLL);
    NSInstrumentation::PlatformFreeToPagedLookasideList(*(PSLIST_HEADER *)(a1 + 24), a2, v16);
  }
}
