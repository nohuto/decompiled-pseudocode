/*
 * XREFs of ndisOidTranslateBetweenOids @ 0x1C0002D80
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C003F030 (WPP_RECORDER_SF_Dq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void *__fastcall ndisOidTranslateBetweenOids(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  void *result; // rax
  int v7; // edx
  int v8; // r8d
  _QWORD *v9; // rcx
  _QWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v11[31]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *(_DWORD *)(a3 + 32);
  result = memset((char *)v11 + 1, 0, 0xF7uLL);
  v10[0] = 0LL;
  if ( v3 == 131334 )
  {
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, 235);
      memset(v11, 0, sizeof(v11));
      LODWORD(v11[1]) = 0;
      LODWORD(v11[11]) |= 0x100008u;
      v11[5] = v10;
      v11[13] = &ndisIntReqGeneric;
      v11[0] = 0x200EC0196LL;
      LODWORD(v11[4]) = 131332;
      LODWORD(v11[6]) = 8;
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
      *(_QWORD *)(a3 + 144) = result;
      if ( result )
      {
        memset(result, 0, 0x40uLL);
        result = (void *)ndisQuerySetMiniport(a1, 0, (unsigned int)v11, 0, 0);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = (_DWORD)result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v10[0];
          memset(v11, 0, sizeof(v11));
          LODWORD(v11[1]) = 0;
          LODWORD(v11[11]) |= 0x100008u;
          v11[5] = v10;
          v11[13] = &ndisIntReqGeneric;
          v11[0] = 0x200EC0196LL;
          LODWORD(v11[4]) = 131333;
          LODWORD(v11[6]) = 8;
          result = (void *)ndisQuerySetMiniport(a1, 0, (unsigned int)v11, 0, 0);
          *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = (_DWORD)result;
          if ( !(_DWORD)result )
          {
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v10[0];
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 40LL) = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL)
                                                      + *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL);
            memset(v11, 0, sizeof(v11));
            LODWORD(v11[1]) = 0;
            LODWORD(v11[11]) |= 0x100008u;
            v11[5] = v10;
            v11[13] = &ndisIntReqGeneric;
            v11[0] = 0x200EC0196LL;
            LODWORD(v11[4]) = 131331;
            LODWORD(v11[6]) = 8;
            result = (void *)ndisQuerySetMiniport(a1, 0, (unsigned int)v11, 0, 0);
            *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = (_DWORD)result;
            if ( !(_DWORD)result )
            {
              result = (void *)v10[0];
              *(_QWORD *)(*(_QWORD *)(a3 + 144) + 48LL) = v10[0];
            }
          }
        }
      }
    }
  }
  else if ( v3 == 131611 && *(_BYTE *)(a1 + 32) < 6u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, 234);
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[1]) = 0;
    LODWORD(v11[11]) |= 0x100088u;
    v11[5] = v10;
    v11[13] = &ndisIntReqGeneric;
    v11[0] = 0x200EC0196LL;
    LODWORD(v11[4]) = 131332;
    LODWORD(v11[6]) = 8;
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
    *(_QWORD *)(a3 + 144) = result;
    if ( result )
    {
      memset(result, 0, 0x40uLL);
      result = (void *)ndisQuerySetMiniport(a1, 0, (unsigned int)v11, 0, 0);
      *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = (_DWORD)result;
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v10[0];
        memset(v11, 0, sizeof(v11));
        LODWORD(v11[1]) = 0;
        LODWORD(v11[11]) |= 0x100008u;
        v11[5] = v10;
        v11[13] = &ndisIntReqGeneric;
        v11[0] = 0x200EC0196LL;
        LODWORD(v11[4]) = 131333;
        LODWORD(v11[6]) = 8;
        result = (void *)ndisQuerySetMiniport(a1, 0, (unsigned int)v11, 0, 0);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = (_DWORD)result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v10[0];
          v9 = *(_QWORD **)(a3 + 144);
          result = (void *)(v9[3] + v9[4]);
          v9[5] = result;
        }
      }
    }
  }
  return result;
}
