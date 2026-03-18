/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0099FE4
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C0099FD0 (NtGdiSetIcmMode.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r11d
  int v12; // eax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  signed __int32 v16; // edx
  __int64 v17; // rcx
  signed __int32 v18; // edx
  __int64 v19; // rax
  signed __int32 v20; // edx
  __int64 v21; // rcx
  signed __int32 v22; // edx
  _QWORD v24[6]; // [rsp+28h] [rbp-69h] BYREF
  __int128 v25; // [rsp+58h] [rbp-39h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h]
  int v27; // [rsp+70h] [rbp-21h]
  _QWORD v28[10]; // [rsp+78h] [rbp-19h] BYREF

  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  v6 = 0;
  if ( v24[0] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v28);
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0;
    v28[0] = 0LL;
    memset(&v28[6], 0, 24);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v25, (struct XDCOBJ *)v24, 0) )
      goto LABEL_43;
    v7 = *(_DWORD *)(v24[0] + 120LL);
    v8 = *(_QWORD *)(v24[0] + 48LL);
    v9 = v7 & 0xF0000000;
    v10 = (unsigned __int8)v7;
    v11 = v7 & 0xF00;
    if ( a2 == 1 )
    {
      if ( !a3 )
      {
        v11 = 0;
        v10 = v7 & 0xF0;
        goto LABEL_31;
      }
      if ( ((a3 - 256) & 0xFFFFFCFF) == 0 && a3 != 768 )
      {
        v11 = a3;
        v13 = (a3 >> 8) & 0xF;
        if ( (a3 & 0x200) != 0 )
        {
          if ( !v8 )
            goto LABEL_9;
          if ( (*(_DWORD *)(v8 + 1824) & 0x2000000) == 0 || *(_DWORD *)(v24[0] + 32LL) == 1 )
            v13 = 1;
        }
        v10 = v7 & 0xF0 | v13;
        goto LABEL_32;
      }
    }
    else
    {
      if ( a2 == 2 )
      {
        v10 = (unsigned __int8)v7 | 0x20;
        if ( !a3 )
          v10 = v7 & 0xDF;
        goto LABEL_32;
      }
      if ( (unsigned int)(a2 - 3) <= 1 )
      {
        if ( ((a3 - 8) & 0xFFFFFFF7) == 0 )
        {
          v9 = 0x20000000;
          goto LABEL_31;
        }
        if ( (a3 == 32 || a3 == 773) && v8 && (*(_DWORD *)(v8 + 1824) & 0x4000000) != 0 )
        {
          v12 = *(_DWORD *)(v24[0] + 32LL);
          v9 = 0x20000000;
          if ( v12 != 1 )
            v9 = 0x10000000;
          v10 = (unsigned __int8)v7 | 0x10;
          if ( v12 != 1 )
            v10 = (unsigned __int8)v7;
LABEL_31:
          if ( a2 != 4 )
          {
LABEL_32:
            if ( (unsigned __int8)v7 != v10
              || (*(_DWORD *)(v24[0] + 120LL) & 0xF00) != v11
              || (*(_DWORD *)(v24[0] + 120LL) & 0xF0000000) != v9 )
            {
              *(_DWORD *)(v24[0] + 120LL) = v9 | v10 | v11;
              *(_DWORD *)(*(_QWORD *)(v24[0] + 976LL) + 240LL) = v9 | v10 | v11 | *(_DWORD *)(*(_QWORD *)(v24[0] + 976LL)
                                                                                            + 240LL) & 0xF000;
              if ( (unsigned __int8)v7 != v10 )
              {
                v14 = *(_QWORD *)(v24[0] + 496LL);
                v15 = *(_QWORD *)(v24[0] + 88LL);
                if ( v15 )
                {
                  v16 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
                  v17 = *(_QWORD *)(v15 + 120);
                  v18 = v16 + 1;
                  *(_DWORD *)(v15 + 32) = v18;
                  if ( v17 != v15 )
                    *(_DWORD *)(v17 + 32) = v18;
                  if ( v14 )
                  {
                    v19 = *(_QWORD *)(v14 + 128);
                    if ( v19 )
                    {
                      v20 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
                      v21 = *(_QWORD *)(v19 + 120);
                      v22 = v20 + 1;
                      *(_DWORD *)(v19 + 32) = v22;
                      if ( v21 != v19 )
                        *(_DWORD *)(v21 + 32) = v22;
                    }
                  }
                }
              }
            }
          }
LABEL_43:
          v6 = v5;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
          DCOBJ::~DCOBJ((DCOBJ *)v28);
          goto LABEL_44;
        }
      }
    }
LABEL_9:
    v5 = 0;
    goto LABEL_43;
  }
LABEL_44:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v6;
}
