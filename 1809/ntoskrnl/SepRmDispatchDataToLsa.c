/*
 * XREFs of SepRmDispatchDataToLsa @ 0x14012FE34
 * Callers:
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x1401B8730 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x1401BB0F0 (ZwRequestPort.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A5908 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
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
  _PORT_MESSAGE LpcMessage; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+5Ch] [rbp-A4h]
  PVOID BaseAddress[58]; // [rsp+60h] [rbp-A0h] BYREF
  _PORT_MESSAGE LpcRequest; // [rsp+230h] [rbp+130h] BYREF
  int v21; // [rsp+258h] [rbp+158h]
  char Src[468]; // [rsp+25Ch] [rbp+15Ch] BYREF

  v2 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(a1 + 56));
  v4 = (HANDLE *)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    LpcMessage.u2.ZeroInit = 0;
    LpcRequest.u2.ZeroInit = 0;
    v21 = 0;
    v6 = *(_DWORD *)(a1 + 16);
    *(unsigned int *)((char *)&LpcMessage.u1.Length + 2) = (unsigned __int16)(v5 + 48);
    LpcMessage.u1.s1.DataLength = v5 + 8;
    LpcRequest.u1.s1.DataLength = *(_WORD *)(a1 + 48);
    *(unsigned int *)((char *)&LpcRequest.u1.Length + 2) = (unsigned __int16)(LpcRequest.u1.s1.DataLength + 40);
    v17 = *(_DWORD *)(a1 + 32);
    if ( v6 == 1 )
    {
      v7 = *(_DWORD *)(a1 + 36);
      v18 = 1;
      if ( v7 <= 0x1D0 )
      {
        memmove(BaseAddress, (const void *)(a1 + 24), v7);
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
              {
                v8 = ZwRequestWaitReplyPort(v4[1], &LpcMessage, &LpcRequest);
              }
              else
              {
                v8 = ZwRequestPort(v4[1], &LpcMessage);
                v21 = 0;
              }
              v2 = v8;
              if ( v8 >= 0 )
              {
                v9 = *(void **)(a1 + 40);
                if ( v9 )
                  memmove(v9, Src, *(unsigned int *)(a1 + 48));
                v2 = v21;
              }
              if ( v18 == 3 )
              {
                RegionSize = 0LL;
                return (unsigned int)ZwFreeVirtualMemory(*v4, BaseAddress, &RegionSize, 0x8000u);
              }
            }
            return (unsigned int)v2;
          }
          v13 = 0LL;
          v18 = 3;
        }
        else
        {
          memmove(v4[8], v12, v11);
          v13 = v4[7];
          v18 = 2;
        }
        v6 = *(_DWORD *)(a1 + 16);
        BaseAddress[0] = v13;
        LpcMessage.u1.Length = 3670032;
      }
      else
      {
        memmove(BaseAddress, v12, v11);
        v18 = 1;
      }
      if ( (unsigned int)(v6 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
