/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033F6C
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1C0038350 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  char v2; // r10
  char v3; // di
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rax
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // rax
  char *v11; // rdx
  char *v12; // rax
  char **v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax

  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *((_DWORD *)a1 + 8) == 0x7FFFFFFF )
    goto LABEL_2;
  v8 = *((_DWORD *)a1 + 11);
  switch ( v8 )
  {
    case 0:
      if ( *((_QWORD *)a1 + 8) )
        goto LABEL_2;
      if ( !*((_QWORD *)a1 + 7) )
      {
        v20 = *((_QWORD *)a2 + 11);
        if ( !v20 )
          v20 = *((_QWORD *)a2 + 12);
        *((_QWORD *)a1 + 7) = v20;
        v2 = 1;
      }
      v21 = *((_QWORD *)a2 + 11);
      if ( !v21 )
        v21 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 8) = v21;
      goto LABEL_51;
    case 1:
      v18 = *((_DWORD *)a1 + 16);
      if ( !v18 )
        goto LABEL_2;
      v19 = *((_DWORD *)a1 + 14);
      if ( v19 )
      {
        v2 = 1;
        *((_DWORD *)a1 + 14) = v19 - 1;
      }
      *((_DWORD *)a1 + 16) = v18 - 1;
LABEL_51:
      if ( !v2 )
        goto LABEL_14;
      goto LABEL_52;
    case 2:
      if ( *((_BYTE *)a1 + 27) )
        v15 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
      else
        v15 = *((_QWORD *)a1 + 8);
      v16 = *((_QWORD *)a2 + 38);
      if ( v15 >= v16 )
      {
        if ( *((_BYTE *)a1 + 27) )
        {
          v17 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 32LL);
          v16 = *((_QWORD *)a2 + 38);
        }
        else
        {
          v17 = *((_QWORD *)a1 + 9);
        }
        if ( v17 >= v16 )
          goto LABEL_52;
LABEL_14:
        v11 = (char *)a2 + 288;
        if ( (unsigned int)(*((_DWORD *)a1 + 11) - 4) <= 1 )
        {
          v12 = (char *)(v5 + 744);
        }
        else if ( v3 )
        {
          v12 = (char *)a1 + 112;
        }
        else
        {
          v12 = (char *)a1 + 96;
        }
        v13 = (char **)*((_QWORD *)v12 + 1);
        if ( *v13 != v12 )
          __fastfail(3u);
        *(_QWORD *)v11 = v12;
        *((_QWORD *)v11 + 1) = v13;
        *v13 = v11;
        *((_QWORD *)v12 + 1) = v11;
        _InterlockedAdd((volatile signed __int32 *)a1 + 8, 1u);
        return 0LL;
      }
      if ( *((_BYTE *)a1 + 25) )
        goto LABEL_27;
LABEL_2:
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
      return 3221225473LL;
  }
  if ( (unsigned int)(v8 - 4) > 1 )
    goto LABEL_14;
  v9 = *((_QWORD *)a2 + 38);
  if ( !*((_BYTE *)a1 + 28) )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 8);
    if ( *((_BYTE *)a1 + 29) )
    {
      if ( *v10 >= v9 )
        goto LABEL_52;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v10 - (int)v9 < 0 )
    {
LABEL_12:
      if ( *((_QWORD *)a1 + 10) )
      {
        ++*(_DWORD *)(v5 + 740);
        *((_DWORD *)a2 + 68) |= 8u;
        goto LABEL_14;
      }
      if ( *((_BYTE *)a1 + 30) )
      {
        if ( *((_BYTE *)a1 + 27) )
          v14 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
        else
          v14 = *((_DWORD *)a1 + 11) == 2 ? *((_QWORD *)a1 + 8) : *((_QWORD *)a1 + 11);
        if ( *((_QWORD *)a2 + 38) <= v14 )
          goto LABEL_14;
      }
LABEL_27:
      ++*((_DWORD *)a1 + 9);
      v3 = 1;
      ++*(_DWORD *)(v4 + 1288);
      ++*(_DWORD *)(v5 + 736);
      *((_DWORD *)a2 + 68) |= 4u;
      goto LABEL_14;
    }
  }
LABEL_52:
  *((_DWORD *)a2 + 68) |= 1u;
  return 0LL;
}
