/*
 * XREFs of SepRmDispatchDataToLsa @ 0x14013286C
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14012CBAC (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401C0490 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x1401C0510 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x1401C2EF0 (ZwRequestPort.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E2DF8 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  int v2; // ebx
  _QWORD *ServerSiloGlobals; // rax
  HANDLE *v4; // rsi
  __int16 v5; // ax
  int v6; // r14d
  unsigned int v7; // eax
  NTSTATUS v8; // eax
  void *v9; // rcx
  SIZE_T v11; // r8
  void *v12; // rdx
  HANDLE v13; // rax
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE LpcMessage[512]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE LpcRequest[512]; // [rsp+230h] [rbp+130h] BYREF

  v2 = 0;
  memset(LpcMessage, 0, sizeof(LpcMessage));
  memset(LpcRequest, 0, sizeof(LpcRequest));
  ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(a1 + 56));
  v4 = (HANDLE *)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    *(_DWORD *)&LpcRequest[40] = 0;
    v6 = *(_DWORD *)(a1 + 16);
    *(_WORD *)&LpcMessage[2] = v5 + 48;
    *(_WORD *)LpcMessage = v5 + 8;
    *(_WORD *)LpcRequest = *(_WORD *)(a1 + 48);
    *(_WORD *)&LpcRequest[2] = *(_WORD *)LpcRequest + 40;
    *(_DWORD *)&LpcMessage[40] = *(_DWORD *)(a1 + 32);
    if ( v6 == 1 )
    {
      v7 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)&LpcMessage[44] = 1;
      if ( v7 <= 0x1D0 )
      {
        memmove(&LpcMessage[48], (const void *)(a1 + 24), v7);
        goto LABEL_5;
      }
    }
    else if ( (unsigned int)(v6 - 4) <= 2 )
    {
      v11 = *(unsigned int *)(a1 + 36);
      v12 = *(void **)(a1 + 24);
      if ( (unsigned int)v11 > 0x1D0 )
      {
        if ( (unsigned int)v11 > 0x1000 )
        {
          v14 = SepAdtCopyToLsaSharedMemory(*v4, v12, v11);
          v2 = v14;
          if ( v14 < 0 )
          {
            SepAuditFailed((unsigned int)v14);
LABEL_5:
            if ( v2 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
                v8 = ZwRequestWaitReplyPort(v4[1], (PPORT_MESSAGE)LpcMessage, (PPORT_MESSAGE)LpcRequest);
              else
                v8 = ZwRequestPort(v4[1], (PPORT_MESSAGE)LpcMessage);
              v2 = v8;
              if ( v8 >= 0 )
              {
                v9 = *(void **)(a1 + 40);
                if ( v9 )
                  memmove(v9, &LpcRequest[44], *(unsigned int *)(a1 + 48));
                v2 = *(_DWORD *)&LpcRequest[40];
              }
              if ( *(_DWORD *)&LpcMessage[44] == 3 )
              {
                RegionSize = 0LL;
                return (unsigned int)ZwFreeVirtualMemory(*v4, (PVOID *)&LpcMessage[48], &RegionSize, 0x8000u);
              }
            }
            return (unsigned int)v2;
          }
          v13 = 0LL;
          *(_DWORD *)&LpcMessage[44] = 3;
        }
        else
        {
          memmove(v4[8], v12, v11);
          v13 = v4[7];
          *(_DWORD *)&LpcMessage[44] = 2;
        }
        v6 = *(_DWORD *)(a1 + 16);
        *(_QWORD *)&LpcMessage[48] = v13;
        *(_DWORD *)LpcMessage = 3670032;
      }
      else
      {
        memmove(&LpcMessage[48], v12, v11);
        *(_DWORD *)&LpcMessage[44] = 1;
      }
      if ( (unsigned int)(v6 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
