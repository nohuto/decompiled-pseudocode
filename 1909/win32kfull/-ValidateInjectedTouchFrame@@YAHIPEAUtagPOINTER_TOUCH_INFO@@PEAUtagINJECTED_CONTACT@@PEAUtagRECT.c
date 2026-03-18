/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DE898
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC7DC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C01DF1EC (WPP_RECORDER_SF_DD.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  _DWORD *v14; // r8
  _DWORD *v15; // rax
  unsigned __int16 v16; // r9
  unsigned int *i; // rcx
  int v18; // r9d
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-28h]
  unsigned __int64 v22; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v7 = a2;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    v13 = v5;
    if ( a5 > (unsigned int)v5 )
    {
      v14 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v14 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          LODWORD(a2) = v5;
          if ( !a1 )
          {
LABEL_12:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_D(v13, (_DWORD)a2, 20, 11, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v13);
            }
            return 0LL;
          }
          v15 = (_DWORD *)((char *)v7 + 4);
          while ( *v15 != v13 )
          {
            LODWORD(a2) = (_DWORD)a2 + 1;
            v15 += 36;
            if ( (unsigned int)a2 >= a1 )
              goto LABEL_12;
          }
        }
        ++v13;
        v14 += 3;
      }
      while ( v13 < a5 );
    }
    if ( !a1 )
      return 1LL;
    for ( i = (unsigned int *)((char *)v7 + 4); ; i += 36 )
    {
      v12 = i[2];
      if ( (v12 & 0x8000) != 0 && (((_DWORD)v12 - 163840) & 0xFFFDFFFF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_D(
            18 * v5,
            (_DWORD)a2,
            20,
            12,
            (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
            *((_DWORD *)v7 + 36 * v5 + 3));
        }
        return 0LL;
      }
      LODWORD(v12) = v12 & 0xFFFF7FFF;
      a2 = (struct tagPOINTER_TOUCH_INFO *)*((unsigned int *)a3 + 3 * *i + 2);
      if ( (_DWORD)v12 == 65542 )
        break;
      if ( (_DWORD)v12 == 0x20000 )
      {
        if ( (((_DWORD)a2 - 131074) & 0xFFFDFFFF) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v18 = 15;
          goto LABEL_47;
        }
      }
      else
      {
        if ( (_DWORD)v12 == 131074 )
          break;
        if ( ((_DWORD)v12 == 131078 || (_DWORD)v12 == 0x40000 || (_DWORD)v12 == 262146)
          && (((_DWORD)a2 - 65542) & 0xFFFEFFFF) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v18 = 14;
LABEL_47:
          WPP_RECORDER_SF_DD(18 * v5, (_DWORD)a2, v12, v18);
          return 0LL;
        }
      }
LABEL_35:
      if ( ((v12 & 2) == 0 || (_DWORD)v12 == 262146)
        && (i[7] != *((_DWORD *)a3 + 3 * *i) || i[8] != *((_DWORD *)a3 + 3 * *i + 1)) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v16 = 16;
        v11 = 18 * v5;
        v21 = *((_DWORD *)v7 + 36 * v5 + 9);
        v20 = *((_DWORD *)v7 + 36 * v5 + 8);
LABEL_16:
        WPP_RECORDER_SF_dd(
          v11,
          (__int64)a2,
          v12,
          v16,
          (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
          v20,
          v21);
        return 0LL;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a1 )
        return 1LL;
    }
    if ( (((_DWORD)a2 - 0x20000) & 0xFFFDFFFD) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v18 = 13;
      goto LABEL_47;
    }
    goto LABEL_35;
  }
  v10 = (unsigned __int64 *)((char *)a2 + 32);
  while ( 1 )
  {
    v22 = *v10;
    if ( !PtInRect(a4, *v10) )
      break;
    ++v9;
    v10 += 18;
    if ( v9 >= a1 )
      goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 10;
    v21 = HIDWORD(v22);
    v20 = v12;
    goto LABEL_16;
  }
  return 0LL;
}
