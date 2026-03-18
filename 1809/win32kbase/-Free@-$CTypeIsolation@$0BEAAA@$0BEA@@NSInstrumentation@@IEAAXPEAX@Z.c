/*
 * XREFs of ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0069F40
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C006E118 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0069E64 (-Free@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C010926C (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,320>::Free(_QWORD *a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rsi
  __int64 *v6; // rbp
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
    {
      if ( i == a1 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2);
        return;
      }
      v6 = (__int64 *)i[4];
      v7 = v6[1];
      v8 = v6[2];
      if ( (unsigned __int64)a2 < (v8 ^ (unsigned __int64)v7)
        || (unsigned __int64)a2 >= (v8 ^ (unsigned __int64)v7) + 81920 )
      {
        v9 = 0;
      }
      else if ( ((unsigned __int16)a2 & 0xFFFu) % 0x140uLL )
      {
        v9 = 3;
      }
      else
      {
        v9 = 2
           - (RtlTestBit(
                (PRTL_BITMAP)(v8 ^ v6[3]),
                ((unsigned __int16)a2 & 0xFFFu) / 0x140
              + 12 * (((unsigned int)a2 - ((unsigned int)v7 ^ (unsigned int)v8)) >> 12)) != 0);
      }
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          NSInstrumentation::CSectionBitmapAllocator<81920,320>::Free(v6, a2);
          ExReleasePushLockSharedEx(v2, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            continue;
          v12 = 2LL;
        }
        else
        {
          v12 = 1LL;
        }
        NSInstrumentation::PlatformAbort(v12, a2);
      }
    }
  }
}
