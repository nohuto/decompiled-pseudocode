/*
 * XREFs of SuspendThreadQueue @ 0x1C00F78C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxReceiverDied @ 0x1C000BC90 (xxxReceiverDied.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     CleanInputMessage @ 0x1C0104D3C (CleanInputMessage.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 *v7; // rbp
  __int64 v8; // r8
  __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v25 = a1;
  v1 = a1;
  if ( (*(_DWORD *)(a1 + 480) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD **)(a1 + 424);
    v3 = (__int64 *)v2[3];
    if ( v3 )
    {
      do
      {
        v10 = (__int64 *)*v3;
        if ( *((_DWORD *)v3 + 24) == 9
          && v3 != (__int64 *)v2[10]
          && v3 != (__int64 *)v2[9]
          && (*((_DWORD *)v3 + 25) & 0x100) == 0 )
        {
          v11 = *((unsigned int *)v3 + 6);
          if ( !((unsigned int)v11 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v11] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry(v2 + 3, v3);
          }
        }
        v3 = v10;
      }
      while ( v10 );
      v1 = v25;
    }
    v4 = *(__int64 **)(v1 + 800);
    if ( v4 )
    {
      do
      {
        v7 = (__int64 *)*v4;
        if ( v4 != (__int64 *)v2[10] && v4 != (__int64 *)v2[9] && (*((_DWORD *)v4 + 25) & 0x100) == 0 )
        {
          v8 = *((unsigned int *)v4 + 6);
          if ( !((unsigned int)v8 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v8] >> 10) & 7) )
          {
            CleanInputMessage((unsigned int)v8, v4);
            DelQEntry((_QWORD *)(v1 + 800), v4);
          }
        }
        v4 = v7;
      }
      while ( v7 );
      v1 = v25;
    }
    v5 = (_QWORD *)(v1 + 512);
    v6 = *(_QWORD **)(v1 + 512);
    if ( v6 != (_QWORD *)(v1 + 512) )
    {
      do
      {
        v13 = (__int64)(v6 - 2);
        v14 = v6;
        v15 = v6[6] == 0LL;
        v6 = (_QWORD *)*v6;
        if ( v15 )
        {
          v16 = *(_DWORD *)(v13 + 84);
          if ( (v16 & 0x4000) == 0 )
          {
            v17 = *(_QWORD *)(v13 + 32);
            if ( v17 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v1 + 416), **(_QWORD **)(v17 + 416)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
                xxxReceiverDied(v13, v18, v19, v20);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
              }
            }
            else if ( (v16 & 8) != 0 )
            {
              v21 = *(unsigned int *)(v13 + 104);
              if ( !((unsigned int)v21 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v21] >> 10) & 7) )
              {
                --*(_DWORD *)(v1 + 528);
                v23 = *v14;
                if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v24 = (_QWORD *)v14[1], (_QWORD *)*v24 != v14) )
                  __fastfail(3u);
                *v24 = v23;
                *(_QWORD *)(v23 + 8) = v24;
                *v14 = 0LL;
                if ( (_QWORD *)*v5 == v5 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 440LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 440LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v13);
              }
            }
          }
        }
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(v1 + 1200) |= 0x20u;
  }
}
