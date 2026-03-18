/*
 * XREFs of NtUserGetThreadState @ 0x1C00F8390
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C00E9280 (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  __int64 *v22; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rax

  v2 = EnterSharedCrit(0LL, 1LL);
  v7 = 0LL;
  v8 = v2;
  if ( a1 > 8 )
  {
    v10 = a1 - 9;
    if ( !v10 )
    {
      v7 = *(int *)(v2 + 568);
      goto LABEL_7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = (__int64 *)gpqForeground;
      LOBYTE(v7) = *(_QWORD *)(v2 + 432) == gpqForeground;
      goto LABEL_7;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = *(unsigned int *)(*(_QWORD *)(v2 + 424) + 776LL);
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = *(_QWORD *)(v2 + 800);
      goto LABEL_7;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v7 = ((unsigned __int64)*(unsigned int *)(v2 + 1208) >> 28) & 1;
        goto LABEL_7;
      }
    }
    else
    {
      CurrentProcessId = PsGetCurrentProcessId();
      v4 = (__int64 *)gpidLogon;
      if ( CurrentProcessId != (HANDLE)gpidLogon && *(PVOID *)(v8 + 456) != grpdeskLogon )
        goto LABEL_7;
    }
    v7 = 1LL;
    goto LABEL_7;
  }
  if ( a1 == 8 )
  {
    v24 = *(_QWORD *)(v2 + 512);
    if ( v24 )
    {
      v4 = (__int64 *)*(unsigned int *)(v24 + 84);
      if ( *(_QWORD *)(v24 + 32) )
      {
        v3 = 1LL;
      }
      else
      {
        v3 = 4LL;
        if ( ((unsigned __int16)v4 & 0x300) == 0 )
          v3 = 2LL;
      }
      v7 = v3 | 8;
      LOBYTE(v4) = (unsigned __int8)v4 & 1;
      if ( !(_BYTE)v4 )
        v7 = v3;
    }
  }
  else
  {
    if ( !a1 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 432) + 112LL);
      goto LABEL_5;
    }
    v16 = a1 - 1;
    if ( !v16 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 432) + 120LL);
LABEL_5:
      if ( v4 )
        v7 = *v4;
      goto LABEL_7;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 432) + 104LL);
      goto LABEL_5;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
              v7 = *(_QWORD *)(*(_QWORD *)(v2 + 432) + 408LL);
          }
          else
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 4LL);
          }
        }
        else
        {
          LOBYTE(v7) = (GetQueueStatus(7295LL, v3) & 5) != 0;
        }
        goto LABEL_7;
      }
      v22 = *(__int64 **)(v2 + 792);
    }
    else
    {
      v22 = *(__int64 **)(v2 + 784);
    }
    if ( v22 )
      v7 = *v22;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
