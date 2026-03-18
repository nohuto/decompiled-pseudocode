/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DEA18
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC95C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C01DF36C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  __int64 v5; // r10
  struct tagPOINTER_TOUCH_INFO *v7; // r11
  unsigned int v9; // edi
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // r8
  unsigned int v16; // edx
  _DWORD *v17; // rax
  unsigned __int16 v18; // r9
  unsigned int *i; // rcx
  int v20; // r9d
  int v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+30h] [rbp-28h]
  unsigned __int64 v24; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v7 = a2;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    v14 = (unsigned int)v5;
    if ( a5 > (unsigned int)v5 )
    {
      v15 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v15 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          v16 = v5;
          if ( !a1 )
          {
LABEL_12:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_D(v14, 2u, 0x14u, 0xBu, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v14);
            return 0LL;
          }
          v17 = (_DWORD *)((char *)v7 + 4);
          while ( *v17 != (_DWORD)v14 )
          {
            ++v16;
            v17 += 36;
            if ( v16 >= a1 )
              goto LABEL_12;
          }
        }
        v14 = (unsigned int)(v14 + 1);
        v15 += 3;
      }
      while ( (unsigned int)v14 < a5 );
    }
    if ( !a1 )
      return 1LL;
    for ( i = (unsigned int *)((char *)v7 + 4); ; i += 36 )
    {
      v13 = i[2];
      if ( (v13 & 0x8000) != 0 && (((_DWORD)v13 - 163840) & 0xFFFDFFFF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            18 * v5,
            2u,
            0x14u,
            0xCu,
            (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
            *((_DWORD *)v7 + 36 * v5 + 3));
        return 0LL;
      }
      LODWORD(v13) = v13 & 0xFFFF7FFF;
      v11 = *((unsigned int *)a3 + 3 * *i + 2);
      if ( (_DWORD)v13 == 65542 )
        break;
      if ( (_DWORD)v13 == 0x20000 )
      {
        if ( (((_DWORD)v11 - 131074) & 0xFFFDFFFF) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v20 = 15;
          goto LABEL_47;
        }
      }
      else
      {
        if ( (_DWORD)v13 == 131074 )
          break;
        if ( ((_DWORD)v13 == 131078 || (_DWORD)v13 == 0x40000 || (_DWORD)v13 == 262146)
          && (((_DWORD)v11 - 65542) & 0xFFFEFFFF) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v20 = 14;
LABEL_47:
          WPP_RECORDER_SF_DD(18 * v5, v11, v13, v20);
          return 0LL;
        }
      }
LABEL_35:
      if ( ((v13 & 2) == 0 || (_DWORD)v13 == 262146)
        && (i[7] != *((_DWORD *)a3 + 3 * *i) || i[8] != *((_DWORD *)a3 + 3 * *i + 1)) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v18 = 16;
        v12 = 18 * v5;
        v23 = *((_DWORD *)v7 + 36 * v5 + 9);
        v22 = *((_DWORD *)v7 + 36 * v5 + 8);
LABEL_16:
        WPP_RECORDER_SF_dd(v12, v11, v13, v18, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v22, v23);
        return 0LL;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a1 )
        return 1LL;
    }
    if ( (((_DWORD)v11 - 0x20000) & 0xFFFDFFFD) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v20 = 13;
      goto LABEL_47;
    }
    goto LABEL_35;
  }
  v10 = (unsigned __int64 *)((char *)a2 + 32);
  while ( 1 )
  {
    v24 = *v10;
    if ( !PtInRect(a4, *v10) )
      break;
    ++v9;
    v10 += 18;
    if ( v9 >= a1 )
      goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 10;
    v23 = HIDWORD(v24);
    v22 = v13;
    goto LABEL_16;
  }
  return 0LL;
}
