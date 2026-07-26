/*
 * XREFs of ndisMDoDirectOidRequest @ 0x1C001D980
 * Callers:
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ndisReplayDirectOids @ 0x1C00B8C18 (ndisReplayDirectOids.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ndisClearBusy @ 0x1C00B82B0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C00B9AB0 (ndisSetBusyAsync.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(__int64 a1, _DWORD *a2, char a3)
{
  struct _KEVENT *v4; // r12
  _DWORD *v5; // rsi
  unsigned int v7; // edi
  KIRQL v8; // r15
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  KIRQL v15; // al
  bool v16; // zf
  KIRQL v17; // dl
  char v18; // [rsp+30h] [rbp-48h]

  v4 = 0LL;
  v5 = a2;
  v7 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      23,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v18);
  }
  if ( !a3 && *(_QWORD *)(a1 + 4448) && !(unsigned __int8)ndisSetBusyAsync(a1, 1, 50, (_DWORD)v5, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        11,
        24,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)v5);
    }
    v7 = 259;
    goto LABEL_14;
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v9 = *(_DWORD *)(a1 + 4248);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( v9 >= 0x4E20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x19u,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        (char)v5,
        32,
        v9);
    v7 = -1073741670;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 124);
    if ( (v10 & 0x20000) != 0 )
    {
      v7 = -1073676276;
    }
    else if ( (*(_DWORD *)(a1 + 120) & 0x80000) != 0 )
    {
      v7 = -1073676275;
    }
    else
    {
      v11 = v5[1];
      if ( v11 != 2 || (v10 & 0x800) == 0 && *(int *)(a1 + 3868) <= 1 )
      {
        v12 = v10 & 0x20100;
        if ( v12 || *(int *)(a1 + 3868) > 1 )
        {
          if ( (v11 & 0xFFFFFFFD) != 0 )
          {
            if ( v11 == 1 )
            {
              v5[13] = v5[12];
              v7 = v12 == 0 ? 0xC023002F : 0;
            }
            else if ( v11 == 12 )
            {
              v5[16] = 0;
            }
          }
          else
          {
            v5[13] = 0;
          }
          v17 = v8;
        }
        else
        {
          *(_DWORD *)(a1 + 4248) = v9 + 1;
          v5[22] |= 0x10000u;
          *(_QWORD *)(a1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
          v7 = ndisMInvokeDirectOidRequest(a1, (__int64)v5);
          if ( v7 == 259 )
            goto LABEL_14;
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
          v16 = (*(_DWORD *)(a1 + 4248))-- == 1;
          if ( v16 && *(_QWORD *)(a1 + 4256) )
          {
            v4 = *(struct _KEVENT **)(a1 + 4256);
            *(_QWORD *)(a1 + 4256) = 0LL;
          }
          v17 = v15;
        }
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v17);
        if ( v7 == 259 )
          goto LABEL_42;
        goto LABEL_40;
      }
      v7 = -2147483633;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
LABEL_40:
  if ( *(_QWORD *)(a1 + 4448) )
    ndisClearBusy(a1, 1LL, 50LL);
LABEL_42:
  if ( v4 )
    KeSetEvent(v4, 0, 0);
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      11,
      26,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      (char)v5,
      v7);
  }
  return v7;
}
