/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x1C0047690
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C0014050 (DxgNotifyInterruptCB.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C004573C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     McTemplateK0xqqqqqqqq @ 0x1C0049198 (McTemplateK0xqqqqqqqq.c)
 */

void __fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  struct MIRACAST_CHUNK *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct MIRACAST_CHUNK *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  struct MIRACAST_CHUNK **v15; // rcx
  __int64 v16; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v6 = *(_QWORD *)(a2 + 24);
      McTemplateK0xqqqqqqqq(
        v6 >> 40,
        v6,
        a3,
        *(_QWORD *)(v3 + 3168),
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 16),
        v6,
        SBYTE5(v6),
        *(_DWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 48),
        *(_DWORD *)(a2 + 52));
    }
    if ( *(_QWORD *)(v3 + 3160) && !*(_BYTE *)(v3 + 3177) )
    {
      if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(v3 + 3152) && *(_DWORD *)(a2 + 48) <= *(_DWORD *)(v3 + 3144) )
      {
        v8 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v3 + 3184));
        v12 = v8;
        if ( v8 )
        {
          *((_OWORD *)v8 + 1) = *(_OWORD *)(a2 + 16);
          *((_QWORD *)v8 + 4) = *(_QWORD *)(a2 + 32);
          *((_DWORD *)v8 + 10) = *(_DWORD *)(a2 + 48);
          memmove((char *)v8 + 44, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 48));
          v14 = *(_QWORD *)(v3 + 3192);
          v15 = *(struct MIRACAST_CHUNK ***)(v14 + 8);
          if ( *v15 != (struct MIRACAST_CHUNK *)v14 )
            __fastfail(3u);
          *(_QWORD *)v12 = v14;
          *((_QWORD *)v12 + 1) = v15;
          *v15 = v12;
          *(_QWORD *)(v14 + 8) = v12;
          ++*(_DWORD *)(v14 + 16);
        }
        else
        {
          v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
          *(_QWORD *)(v13 + 24) = v3;
          WdLogEvent5_WdWarning(v13);
          *(_BYTE *)(v3 + 3176) = 1;
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741811;
        v7 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v7 + 24) = v3;
        *(_QWORD *)(v7 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v7);
        *(_BYTE *)(v3 + 3177) = 1;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = v3;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
  }
  *(_DWORD *)(a2 + 52) = v4;
}
