/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x14057EC00
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *PoolWithTag; // rbx
  unsigned int *i; // rdi
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // kr08_8
  ULONG NumberOfBytes; // [rsp+48h] [rbp-19h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+4Ch] [rbp-15h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-11h] BYREF
  int v8; // [rsp+54h] [rbp-Dh] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 *p_NumberOfBytes_4; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  int *v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]

  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140401458[0])(35LL, 0LL, 0LL, &NumberOfBytes) == -1073741820 )
  {
    if ( NumberOfBytes )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPool, NumberOfBytes, 0x74703353u);
      if ( PoolWithTag )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, ULONG *))off_140401458[0])(
               35LL,
               NumberOfBytes,
               PoolWithTag,
               &NumberOfBytes) >= 0 )
        {
          for ( i = PoolWithTag + 2;
                i < (unsigned int *)((char *)PoolWithTag + PoolWithTag[1]);
                i = (unsigned int *)((char *)i + *((char *)i + 2)) )
          {
            if ( *(_WORD *)i )
            {
              if ( *(_WORD *)i == 1 )
              {
                v9 = *(_QWORD *)(i + 1) / 0xF4240uLL;
                v4 = *(_QWORD *)(i + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v9;
                p_NumberOfBytes_4 = &v10;
                v10 = v4 / 0xF4240;
                v13 = 8LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_SUSPEND, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
              }
            }
            else
            {
              v7 = i[1];
              NumberOfBytes_4 = *((_QWORD *)i + 1) / 0xF4240uLL;
              v2 = *((_QWORD *)i + 2);
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&v7;
              p_NumberOfBytes_4 = (unsigned __int64 *)&NumberOfBytes_4;
              v14 = &v8;
              v8 = v2 / 0xF4240;
              v13 = 4LL;
              v15 = 4LL;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_RESUME, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
              if ( !qword_140418C08 )
              {
                v3 = -1LL;
                if ( is_mul_ok(NumberOfBytes_4, PopQpcFrequency) )
                  v3 = NumberOfBytes_4 * PopQpcFrequency;
                qword_140418C08 = v3 / 0x3E8;
              }
            }
          }
        }
        ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
      }
    }
  }
}
