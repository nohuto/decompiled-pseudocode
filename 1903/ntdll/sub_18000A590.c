/*
 * XREFs of sub_18000A590 @ 0x18000A590
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 * Callees:
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800D0BA0 @ 0x1800D0BA0 (sub_1800D0BA0.c)
 */

char __fastcall sub_18000A590(PVOID BaseOfImage, __int64 a2, __int64 *a3, int a4)
{
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r15d
  __int64 v11; // r9
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // r10
  __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int16 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int16 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _BYTE v47[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v48[16]; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(v8) = RtlRunOnceExecuteOnce(&stru_1801660C0, sub_1800827D0, 0LL, 0LL);
  if ( (int)v8 >= 0 )
  {
    v9 = (unsigned __int16)dword_180166010;
    LOBYTE(v8) = ++dword_180166010;
    if ( !v9 )
    {
      v27 = 0LL;
      if ( a2 )
      {
        v10 = 1;
        LODWORD(v8) = LdrResGetRCConfig((_DWORD)BaseOfImage, a2, (unsigned int)&v27, 4096, 0);
        if ( (int)v8 >= 0 )
          v11 = v27;
        else
          v11 = 0LL;
      }
      else
      {
        v10 = 0;
        v8 = sub_180018940(BaseOfImage);
        v11 = v8;
      }
      if ( v11 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_18015F450 > 5 )
            {
              LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
              if ( (_BYTE)v8 )
              {
                v28 = *a3;
                v29 = a3[1];
                v26 = 4;
                v38 = 4LL;
                v39 = &v26;
                v33 = &v28;
                v41 = (__int16 *)(v17 + 28);
                LODWORD(v27) = v10;
                v34 = 8LL;
                v35 = &v29;
                v36 = 8LL;
                v37 = &v27;
                v40 = v18;
                v42 = 16LL;
                LOBYTE(v8) = sub_18008935C(
                               (int)&dword_18015F450,
                               (int)&dword_18012BC85,
                               v16,
                               v17,
                               7u,
                               (PEVENT_DATA_DESCRIPTOR)v32);
              }
            }
          }
          else if ( a4 == 3 )
          {
            if ( (unsigned int)dword_18015F450 > 5 )
            {
              LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
              if ( (_BYTE)v8 )
              {
                v29 = *a3;
                v28 = a3[1];
                v30 = a3[2];
                v26 = 4;
                v40 = 4LL;
                v35 = &v28;
                v41 = &v26;
                v33 = &v29;
                v37 = &v30;
                v43 = (__int16 *)(v20 + 28);
                LODWORD(v27) = v10;
                v34 = 8LL;
                v36 = 8LL;
                v38 = 8LL;
                v39 = (__int16 *)&v27;
                v42 = v21;
                v44 = 16LL;
                LOBYTE(v8) = sub_18008935C(
                               (int)&dword_18015F450,
                               (int)&dword_18012BA7C,
                               v19,
                               v20,
                               8u,
                               (PEVENT_DATA_DESCRIPTOR)v32);
              }
            }
          }
          else if ( (unsigned int)dword_18015F450 > 5 )
          {
            LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
            if ( (_BYTE)v8 )
            {
              v30 = *a3;
              v29 = a3[1];
              v28 = a3[2];
              v31 = a3[3];
              v26 = 4;
              v42 = 4LL;
              v35 = &v29;
              v43 = &v26;
              v33 = &v30;
              v37 = &v28;
              v45 = v23 + 28;
              LODWORD(v27) = v10;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 8LL;
              v39 = (__int16 *)&v31;
              v40 = 8LL;
              v41 = (__int16 *)&v27;
              v44 = v24;
              v46 = 16LL;
              LOBYTE(v8) = sub_18008935C(
                             (int)&dword_18015F450,
                             (int)&dword_18012B7C4,
                             v22,
                             v23,
                             9u,
                             (PEVENT_DATA_DESCRIPTOR)v32);
            }
          }
        }
        else if ( (unsigned int)dword_18015F450 > 5 )
        {
          LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
          if ( (_BYTE)v8 )
          {
            sub_1800D0BA0(v48, L"ResIdCount less than 2.");
            LOBYTE(v8) = sub_18008935C(
                           (int)&dword_18015F450,
                           (int)&dword_18012B6C1,
                           v14,
                           v15,
                           3u,
                           (PEVENT_DATA_DESCRIPTOR)v47);
          }
        }
      }
      else if ( (unsigned int)dword_18015F450 > 5 )
      {
        LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
        if ( (_BYTE)v8 )
        {
          sub_1800D0BA0(v48, L"Failed to retrieve service checksum.");
          LOBYTE(v8) = sub_18008935C(
                         (int)&dword_18015F450,
                         (int)&dword_18012B8F9,
                         v12,
                         v13,
                         3u,
                         (PEVENT_DATA_DESCRIPTOR)v47);
        }
      }
    }
  }
  return v8;
}
