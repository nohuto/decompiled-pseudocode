/*
 * XREFs of ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01008C4
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0086CD4 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01009EC (-Free@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02BF7E4 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<233472,912>::Free(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rsi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r9
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
      v6 = (_QWORD *)i[4];
      v7 = v6[1];
      v8 = v6[2];
      if ( a2 < (v8 ^ v7) || a2 >= (v8 ^ v7) + 233472 )
      {
        v9 = 0;
      }
      else if ( (a2 & 0xFFF) % 0x390 )
      {
        v9 = 3;
      }
      else
      {
        v9 = 2
           - (RtlTestBit(
                (PRTL_BITMAP)(v8 ^ v6[3]),
                (a2 & 0xFFF) / 0x390 + 4 * (((unsigned int)a2 - ((unsigned int)v7 ^ (unsigned int)v8)) >> 12)) != 0);
      }
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          NSInstrumentation::CSectionBitmapAllocator<233472,912>::Free(v6, a2);
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
