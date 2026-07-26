/*
 * XREFs of ndisOidPreReceiveFilterCaps @ 0x1C0060E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

char __fastcall ndisOidPreReceiveFilterCaps(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r12
  size_t v7; // r8
  _WORD *v8; // rdx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // rax
  char v14[4]; // [rsp+40h] [rbp-38h]

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      10,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      v1,
      v5,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    v7 = *(unsigned int *)(v3 + 48);
    if ( (unsigned int)v7 < 0x38 )
    {
      *(_DWORD *)(v3 + 56) = 56;
      v2 = -1073676268;
      v4 = 1;
      goto LABEL_21;
    }
    if ( !v1 )
      goto LABEL_22;
    if ( *(_DWORD *)(v3 + 32) == 66081 )
      v8 = *(_WORD **)(v1 + 3536);
    else
      v8 = *(_WORD **)(v1 + 3544);
    if ( v8 )
    {
      v9 = v8[1];
      v10 = v9;
      if ( v9 >= 0x54u )
        v10 = 84;
      if ( v10 < (unsigned int)v7 )
        v7 = v10;
      v11 = v7;
      memmove(*(void **)(v3 + 40), v8, v7);
      v12 = *(_QWORD *)(v3 + 40);
      v4 = 1;
      if ( v11 < 0x54 )
      {
        if ( v11 >= 0x38 )
        {
          *(_BYTE *)(v12 + 1) = 1;
          *(_WORD *)(v12 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v12 + 1) = 2;
        *(_WORD *)(v12 + 2) = 84;
      }
      *(_DWORD *)(v3 + 52) = v11;
      goto LABEL_21;
    }
  }
  v4 = 1;
  v2 = -1073741637;
LABEL_21:
  *((_DWORD *)a1 + 10) = v2;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      v1,
      v5,
      v4,
      *(_DWORD *)v14);
  }
  return v4;
}
