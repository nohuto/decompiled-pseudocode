/*
 * XREFs of ExCovReadjustUnloadedModuleEntry @ 0x1407106A4
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x140005740 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D8520 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1408D87A4 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1408D9298 (ExpCovReadFriendlyName.c)
 */

void __fastcall ExCovReadjustUnloadedModuleEntry(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  bool v6; // si
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  _DWORD *v9; // r14
  SIZE_T v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned int v14; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --CurrentThread->KernelApcDisable;
    ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
    v5 = ExpCovUnloadedModuleList;
    v6 = 0;
    if ( (__int64 *)ExpCovUnloadedModuleList != &ExpCovUnloadedModuleList )
    {
      while ( 1 )
      {
        v7 = v5;
        if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
          && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 32), &String2, 1u) )
        {
          break;
        }
        if ( String2.Buffer )
          RtlFreeAnsiString(&String2);
        v5 = *(_QWORD *)v5;
        if ( (__int64 *)v5 == &ExpCovUnloadedModuleList )
          goto LABEL_8;
      }
      if ( String2.Buffer )
        RtlFreeAnsiString(&String2);
LABEL_8:
      if ( v7 && (__int64 *)v5 != &ExpCovUnloadedModuleList )
      {
        v8 = *(_DWORD **)(v7 + 56);
        v9 = *(_DWORD **)(a1 + 128);
        if ( v9[1] == v8[1] && v9[6] == v8[6] && v9[7] == v8[7] )
        {
          v10 = RtlCompareMemory(v9 + 2, v8 + 2, 0x10uLL);
          v11 = v7 + 16;
          if ( v10 == 16 )
          {
            DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v11, *(_QWORD *)&String2.Length);
            v12 = *(_QWORD *)(a1 + 128) + (unsigned int)v9[8];
            v13 = *(_QWORD *)(v7 + 56) + (unsigned int)v8[8];
            if ( a2 )
            {
              memmove(
                (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v9[8]),
                (const void *)(*(_QWORD *)(v7 + 56) + (unsigned int)v8[8]),
                (unsigned int)v9[7]);
              ExpCovDeleteUnloadedModuleEntry(v7);
            }
            else
            {
              v14 = 0;
              if ( (v8[7] & 0xFFFFFFFC) != 0 )
              {
                do
                {
                  _InterlockedOr((volatile signed __int32 *)(v13 + 4LL * v14), *(_DWORD *)(v12 + 4LL * v14));
                  ++v14;
                }
                while ( v14 < v8[7] >> 2 );
              }
            }
            goto LABEL_27;
          }
        }
        else
        {
          v11 = v7 + 16;
        }
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v11, *(_QWORD *)&String2.Length);
        ExpCovDeleteUnloadedModuleEntry(v7);
        if ( !a2 )
          v6 = 1;
        goto LABEL_27;
      }
    }
    v6 = a2 == 0;
LABEL_27:
    ExfReleasePushLock(&ExpCovPushLock);
    KeLeaveCriticalRegion();
    if ( v6 )
      ExpCovCreateUnloadedModuleEntry(a1);
  }
}
