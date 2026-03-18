/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C00730F0
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0035470 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     GreIncQuotaCount @ 0x1C0064A20 (GreIncQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  __int64 result; // rax

  v3 = gpKernelHandleTable;
  v6 = (unsigned int)((a1 - (__int64)qword_1C01A0E28) >> 5);
  v7 = 3 * v6;
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * v6 + 1);
  v9 = *((_QWORD *)gpKernelHandleTable + 3 * v6);
  --*(_DWORD *)(v8 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v9 + 80) & 8) == 0 && v8 != *(_QWORD *)(a2 + 416) )
  {
    if ( *(_QWORD *)(v9 + 88) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v11, v10, v12);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416), v13, v14);
    }
    if ( *(_QWORD *)(v9 + 96) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v16, v15, v17);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416), v18, v19);
    }
    if ( *(_QWORD *)(v9 + 128) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v21, v20, v22);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416), v23, v24);
    }
  }
  *(_DWORD *)(v9 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C0172BBC + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 416);
  v3[v7 + 1] = *(_QWORD *)(a2 + 416);
  *(_QWORD *)(a1 + 8) = PsGetProcessId(**(PEPROCESS **)(a2 + 416));
  result = v3[v7 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
