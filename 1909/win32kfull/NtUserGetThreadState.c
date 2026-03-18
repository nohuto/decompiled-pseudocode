/*
 * XREFs of NtUserGetThreadState @ 0x1C00DD420
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C0130820 (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 *v19; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v21; // rax
  __int64 v22; // rdx

  v2 = EnterSharedCrit(0LL, 1LL);
  v4 = 0LL;
  v5 = v2;
  if ( a1 > 8 )
  {
    v9 = a1 - 9;
    if ( !v9 )
    {
      v4 = *(int *)(v2 + 560);
      goto LABEL_7;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v3 = (__int64 *)gpqForeground;
      LOBYTE(v4) = *(_QWORD *)(v2 + 424) == gpqForeground;
      goto LABEL_7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = *(unsigned int *)(*(_QWORD *)(v2 + 416) + 768LL);
      goto LABEL_7;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v4 = *(_QWORD *)(v2 + 792);
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          v4 = ((unsigned __int64)*(unsigned int *)(v2 + 1224) >> 28) & 1;
        goto LABEL_7;
      }
    }
    else
    {
      CurrentProcessId = PsGetCurrentProcessId();
      v3 = (__int64 *)gpidLogon;
      if ( CurrentProcessId != (HANDLE)gpidLogon && *(PVOID *)(v5 + 448) != grpdeskLogon )
        goto LABEL_7;
    }
    v4 = 1LL;
    goto LABEL_7;
  }
  if ( a1 == 8 )
  {
    v21 = *(_QWORD *)(v2 + 504);
    if ( v21 )
    {
      v3 = (__int64 *)*(unsigned int *)(v21 + 84);
      if ( *(_QWORD *)(v21 + 32) )
      {
        v22 = 1LL;
      }
      else
      {
        v22 = 4LL;
        if ( ((unsigned __int16)v3 & 0x300) == 0 )
          v22 = 2LL;
      }
      v4 = v22 | 8;
      LOBYTE(v3) = (unsigned __int8)v3 & 1;
      if ( !(_BYTE)v3 )
        v4 = v22;
    }
  }
  else
  {
    if ( !a1 )
    {
      v3 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 120LL);
      goto LABEL_5;
    }
    v7 = a1 - 1;
    if ( !v7 )
    {
      v3 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 128LL);
LABEL_5:
      if ( v3 )
        v4 = *v3;
      goto LABEL_7;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v3 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 112LL);
      goto LABEL_5;
    }
    v15 = v8 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
              v4 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 416LL);
          }
          else
          {
            v4 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL);
          }
        }
        else
        {
          LOBYTE(v4) = (GetQueueStatus(7295LL) & 5) != 0;
        }
        goto LABEL_7;
      }
      v19 = *(__int64 **)(v2 + 784);
    }
    else
    {
      v19 = *(__int64 **)(v2 + 776);
    }
    if ( v19 )
      v4 = *v19;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
