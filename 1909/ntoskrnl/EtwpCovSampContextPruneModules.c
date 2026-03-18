/*
 * XREFs of EtwpCovSampContextPruneModules @ 0x140902B00
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140901A04 (EtwpCovSampContextGetModule.c)
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x140117800 (PsGetCurrentThreadId.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleCleanup @ 0x140903AA4 (EtwpCovSampModuleCleanup.c)
 */

unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r14
  __int64 *i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _OWORD *v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r13
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // r11
  _QWORD *v19; // rax
  _QWORD *v20; // r10
  int v21; // r9d
  _QWORD *j; // rdx
  _QWORD *v23; // r15
  int v24; // r9d
  _QWORD *k; // rdx
  unsigned __int64 **v26; // rax
  unsigned __int64 **v27; // rdx
  unsigned __int64 ***v28; // rcx
  unsigned __int64 *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // [rsp+28h] [rbp-89h]
  unsigned __int64 v33; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 *v34; // [rsp+38h] [rbp-79h]
  _QWORD *v35; // [rsp+40h] [rbp-71h] BYREF
  _QWORD *v36; // [rsp+48h] [rbp-69h]
  _OWORD v37[8]; // [rsp+58h] [rbp-59h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  result = *(_DWORD *)(a1 + 16) >> 1;
  if ( *(_DWORD *)(a1 + 732) > (unsigned int)result || *(_DWORD *)(a1 + 1116) > (int)result )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1120),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v3 = 8LL;
      v4 = v37;
      v5 = 8LL;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
        --v5;
      }
      while ( v5 );
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (volatile signed __int64 *)(a1 + 664);
      ExAcquirePushLockSharedEx(a1 + 664, 0LL);
      for ( i = *(__int64 **)(a1 + 712); i != (__int64 *)(a1 + 712); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v9 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v9 >= 0x100 )
            v10 = ((v9 - 256) >> 8) + 4;
          else
            v10 = v9 >> 6;
          if ( (unsigned int)v10 >= 8 )
            v10 = 7LL;
          v11 = i + 2;
          v12 = &v37[v10];
          v13 = (_QWORD *)*((_QWORD *)v12 + 1);
          if ( (_OWORD *)*v13 != v12 )
LABEL_54:
            __fastfail(3u);
          *v11 = v12;
          i[3] = (__int64)v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
        }
      }
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = &v35;
      v36 = &v35;
      v35 = &v35;
      v15 = v37;
      do
      {
        if ( (_QWORD *)*v15 != v15 )
        {
          *v14 = *v15;
          *(_QWORD *)(*v15 + 8LL) = v36;
          v36 = (_QWORD *)v15[1];
          *v36 = &v35;
          v14 = v36;
        }
        v15 += 2;
        --v3;
      }
      while ( v3 );
      v16 = 0LL;
      v34 = &v33;
      v33 = (unsigned __int64)&v33;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
      v18 = v35;
      *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
      while ( v18 != &v35 )
      {
        v19 = v18;
        v20 = v18 - 11;
        v18 = (_QWORD *)*v18;
        v19[1] = v19;
        *v19 = v19;
        if ( v20[8] == 1LL && !*((_DWORD *)v20 + 33) && ++v16 > (unsigned __int64)*(unsigned int *)(a1 + 16) )
        {
          if ( (v20[15] & 0x40000) == 0 )
          {
            v21 = *(_DWORD *)(a1 + 684) >> 5;
            v32 = v20[1] & (-1LL << (*(_DWORD *)(a1 + 684) & 0x1F));
            for ( j = (_QWORD *)(*(_QWORD *)(a1 + 688)
                               + 8LL
                               * ((37
                                 * (BYTE6(v32)
                                  + 37
                                  * (BYTE5(v32)
                                   + 37
                                   * (BYTE4(v32)
                                    + 37
                                    * (BYTE3(v32)
                                     + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                                 + HIBYTE(v32)) & (unsigned int)(v21 - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
            {
              if ( (_QWORD *)*j == v20 )
              {
                *j = *v20;
                --*(_DWORD *)(a1 + 680);
                break;
              }
            }
            *v20 = 0LL;
          }
          v23 = v20 + 2;
          if ( v20[2] )
          {
            v24 = *(_DWORD *)(a1 + 700) >> 5;
            v32 = v20[3] & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
            for ( k = (_QWORD *)(*(_QWORD *)(a1 + 704)
                               + 8LL
                               * ((37
                                 * (BYTE6(v32)
                                  + 37
                                  * (BYTE5(v32)
                                   + 37
                                   * (BYTE4(v32)
                                    + 37
                                    * (BYTE3(v32)
                                     + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                                 + HIBYTE(v32)) & (unsigned int)(v24 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
            {
              if ( (_QWORD *)*k == v23 )
              {
                *k = *v23;
                --*(_DWORD *)(a1 + 696);
                break;
              }
            }
            *v23 = 0LL;
          }
          v26 = (unsigned __int64 **)(v20 + 9);
          v27 = (unsigned __int64 **)v20[9];
          if ( v27[1] != v20 + 9 )
            goto LABEL_54;
          v28 = (unsigned __int64 ***)v20[10];
          if ( *v28 != v26 )
            goto LABEL_54;
          *v28 = v27;
          v27[1] = (unsigned __int64 *)v28;
          v29 = v34;
          --*(_DWORD *)(a1 + 728);
          if ( (unsigned __int64 *)*v29 != &v33 )
            goto LABEL_54;
          v20[10] = v29;
          *v26 = &v33;
          *v29 = (unsigned __int64)v26;
          v34 = v20 + 9;
        }
      }
      *(_DWORD *)(a1 + 732) = 0;
      *(_DWORD *)(a1 + 1116) = 0;
      *(_QWORD *)(a1 + 672) = 0LL;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      while ( 1 )
      {
        result = v33;
        if ( (unsigned __int64 *)v33 == &v33 )
          break;
        if ( *(unsigned __int64 **)(v33 + 8) != &v33 )
          goto LABEL_54;
        v30 = *(_QWORD *)v33;
        if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
          goto LABEL_54;
        v33 = *(_QWORD *)v33;
        v31 = (_QWORD *)(result - 72);
        *(_QWORD *)(v30 + 8) = &v33;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v31, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1120), 0);
    }
  }
  return result;
}
