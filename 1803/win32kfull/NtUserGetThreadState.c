/*
 * XREFs of NtUserGetThreadState @ 0x1C00DED00
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C003BE50 (_GetQueueStatus.c)
 */

unsigned __int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
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
  unsigned __int64 *v20; // rax
  int v21; // edi
  int v22; // edi
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rax
  bool v25; // zf
  int v26; // eax

  v2 = EnterSharedCrit(0LL, 1LL);
  v7 = 0LL;
  v8 = v2;
  if ( a1 > 8 )
  {
    v12 = a1 - 9;
    if ( !v12 )
    {
      v7 = *(int *)(v2 + 560);
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v4 = gpqForeground;
      LOBYTE(v7) = *(_QWORD *)(v2 + 424) == gpqForeground;
      goto LABEL_7;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = *(unsigned int *)(*(_QWORD *)(v2 + 416) + 768LL);
      goto LABEL_7;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v7 = *(_QWORD *)(v2 + 784);
      goto LABEL_7;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          v7 = ((unsigned __int64)*(unsigned int *)(v2 + 1200) >> 28) & 1;
        goto LABEL_7;
      }
    }
    else
    {
      CurrentProcessId = PsGetCurrentProcessId();
      v4 = gpidLogon;
      if ( CurrentProcessId != (HANDLE)gpidLogon && *(PVOID *)(v8 + 448) != grpdeskLogon )
        goto LABEL_7;
    }
    v7 = 1LL;
    goto LABEL_7;
  }
  if ( a1 == 8 )
  {
    v24 = *(_QWORD *)(v2 + 504);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 32) == 0LL;
      v26 = *(_DWORD *)(v24 + 84);
      if ( v25 )
      {
        if ( (v26 & 0x300) != 0 )
        {
          v4 = 4LL;
          v7 = 12LL;
        }
        else
        {
          v4 = 2LL;
          v7 = 10LL;
        }
      }
      else
      {
        v4 = 1LL;
        v7 = 9LL;
      }
      if ( (v26 & 1) == 0 )
        v7 = v4;
    }
  }
  else
  {
    if ( !a1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 112LL);
      goto LABEL_5;
    }
    v10 = a1 - 1;
    if ( !v10 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 120LL);
LABEL_5:
      if ( v4 )
        v7 = *(_QWORD *)v4;
      goto LABEL_7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 104LL);
      goto LABEL_5;
    }
    v18 = v11 - 1;
    if ( !v18 )
    {
      v20 = *(unsigned __int64 **)(v2 + 768);
LABEL_22:
      if ( v20 )
        v7 = *v20;
      goto LABEL_7;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v20 = *(unsigned __int64 **)(v2 + 776);
      goto LABEL_22;
    }
    v21 = v19 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
          v7 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 408LL);
      }
      else
      {
        v7 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL);
      }
    }
    else
    {
      LOBYTE(v7) = (GetQueueStatus(7295LL, v3) & 5) != 0;
    }
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
