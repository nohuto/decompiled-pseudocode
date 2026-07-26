/*
 * XREFs of ?ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z @ 0x1C00FBF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisIfQueryLoopbackObject(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 59);
  if ( !a1 )
    return 3221225485LL;
  if ( a2 <= 0x10285 )
  {
    if ( a2 != 66181 )
    {
      switch ( a2 )
      {
        case 0x10106u:
          if ( *a3 >= 4 )
          {
            *a3 = 4;
            v8 = a1[280];
            goto LABEL_9;
          }
          return 3221291030LL;
        case 0x10280u:
          if ( *a3 )
          {
            *a3 = 1;
            *(_BYTE *)a4 = *((_BYTE *)a1 + 1216);
            goto LABEL_10;
          }
          return 3221291030LL;
        case 0x10281u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v11 = *((_QWORD *)a1 + 169);
          goto LABEL_26;
        case 0x10282u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v11 = *((_QWORD *)a1 + 170);
          goto LABEL_26;
        case 0x10283u:
          if ( *a3 >= 4 )
          {
            *a3 = 4;
            v8 = a1[278];
            goto LABEL_9;
          }
          return 3221291030LL;
      }
      if ( a2 != 66180 )
        goto LABEL_46;
    }
    if ( *a3 < 8 )
      return 3221291030LL;
    *a3 = 8;
    v11 = 0x40000000LL;
LABEL_26:
    *(_QWORD *)a4 = v11;
    goto LABEL_10;
  }
  if ( a2 == 66183 )
  {
    if ( *a3 >= 0xD8 )
    {
      *a3 = 216;
      *a4 = a1[278];
      a4[1] = a1[279];
      *((_QWORD *)a4 + 3) = 0x40000000LL;
      *((_QWORD *)a4 + 4) = 0x40000000LL;
      a4[2] = 1;
      a4[3] = 2;
      memset(a4 + 16, 0, 0x90uLL);
      a4[4] = a1[280];
      *((_BYTE *)a4 + 20) = *((_BYTE *)a1 + 1216);
      *((_BYTE *)a4 + 21) = *((_BYTE *)a1 + 1217);
      *((_QWORD *)a4 + 5) = *((_QWORD *)a1 + 169);
      v10 = *((_QWORD *)a1 + 170);
      *((_QWORD *)a4 + 7) = 0LL;
      *((_QWORD *)a4 + 6) = v10;
      a4[52] = a1[144];
      a4[53] = a1[354];
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( a2 != 66184 )
  {
    switch ( a2 )
    {
      case 0x1028Au:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          *a4 = 1;
          goto LABEL_10;
        }
        return 3221291030LL;
      case 0x1028Cu:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          *a4 = 2;
          goto LABEL_10;
        }
        return 3221291030LL;
      case 0x20106u:
        if ( *a3 >= 0x90 )
        {
          *a3 = 144;
          memset(a4, 0, 0x90uLL);
          goto LABEL_10;
        }
        return 3221291030LL;
    }
LABEL_46:
    if ( *a3 >= 8 )
    {
      *a3 = 8;
      *(_QWORD *)a4 = 0LL;
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  v8 = a1[298];
LABEL_9:
  *a4 = v8;
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 60);
  return 0LL;
}
