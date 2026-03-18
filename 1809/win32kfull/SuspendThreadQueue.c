/*
 * XREFs of SuspendThreadQueue @ 0x1C01167E0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxReceiverDied @ 0x1C00BC764 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C00D4EBC (UnlinkSendListSms.c)
 *     CleanInputMessage @ 0x1C00D5D60 (CleanInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v10; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = a1;
  v1 = a1;
  if ( (*(_DWORD *)(a1 + 488) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD **)(a1 + 432);
    v3 = v2[3];
    if ( v3 )
    {
      do
      {
        v10 = *(_QWORD *)v3;
        if ( *(_DWORD *)(v3 + 96) == 9 && v3 != v2[10] && v3 != v2[9] && (*(_DWORD *)(v3 + 100) & 0x100) == 0 )
        {
          v18 = *(unsigned int *)(v3 + 24);
          if ( !((unsigned int)v18 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v18] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry((__int64)(v2 + 3), v3, 1);
          }
        }
        v3 = v10;
      }
      while ( v10 );
      v1 = v22;
    }
    v4 = *(_QWORD *)(v1 + 808);
    if ( v4 )
    {
      do
      {
        v7 = *(_QWORD *)v4;
        if ( v4 != v2[10] && v4 != v2[9] && (*(_DWORD *)(v4 + 100) & 0x100) == 0 )
        {
          v8 = *(unsigned int *)(v4 + 24);
          if ( !((unsigned int)v8 < 0x400 ? ((unsigned __int16)MessageTable[v8] >> 10) & 7 : 1) )
          {
            CleanInputMessage(v8, v4);
            DelQEntry(v1 + 808, v4, 1);
          }
        }
        v4 = v7;
      }
      while ( v7 );
      v1 = v22;
    }
    v5 = (_QWORD *)(v1 + 520);
    v6 = *(_QWORD **)(v1 + 520);
    if ( v6 != (_QWORD *)(v1 + 520) )
    {
      do
      {
        v11 = (__int64)(v6 - 2);
        v12 = v6;
        v13 = v6[6] == 0LL;
        v6 = (_QWORD *)*v6;
        if ( v13 )
        {
          v14 = *(_DWORD *)(v11 + 84);
          if ( (v14 & 0x4000) == 0 )
          {
            v15 = *(_QWORD *)(v11 + 32);
            if ( v15 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v1 + 424), **(_QWORD **)(v15 + 424)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
                xxxReceiverDied(v11);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
              }
            }
            else if ( (v14 & 8) != 0 )
            {
              v16 = *(unsigned int *)(v11 + 104);
              if ( !((unsigned int)v16 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v16] >> 10) & 7) )
              {
                --*(_DWORD *)(v1 + 536);
                v20 = *v12;
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v21 = (_QWORD *)v12[1], (_QWORD *)*v21 != v12) )
                  __fastfail(3u);
                *v21 = v20;
                *(_QWORD *)(v20 + 8) = v21;
                *v12 = 0LL;
                if ( (_QWORD *)*v5 == v5 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v11);
              }
            }
          }
        }
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(v1 + 1208) |= 0x20u;
  }
}
