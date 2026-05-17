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

char __fastcall sub_18000A590(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r15d
  __int64 v13; // r9
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // r10
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // r10
  __int16 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int16 *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int16 *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int16 *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  _BYTE v49[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v50[16]; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(v8) = RtlRunOnceExecuteOnce(&unk_1801660C0, sub_1800827D0, 0LL, 0LL);
  if ( (int)v8 >= 0 )
  {
    v11 = (unsigned __int16)dword_180166010;
    LOBYTE(v8) = ++dword_180166010;
    if ( !v11 )
    {
      v29 = 0LL;
      if ( a2 )
      {
        v12 = 1;
        LODWORD(v8) = LdrResGetRCConfig(a1, a2, (unsigned int)&v29, 4096, 0);
        if ( (int)v8 >= 0 )
          v13 = v29;
        else
          v13 = 0LL;
      }
      else
      {
        LOBYTE(v10) = 1;
        v12 = 0;
        v8 = sub_180018940(a1, v9, 0LL, v10);
        v13 = v8;
      }
      if ( v13 )
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
                v30 = *a3;
                v31 = a3[1];
                v28 = 4;
                v40 = 4LL;
                v41 = &v28;
                v35 = &v30;
                v43 = (__int16 *)(v19 + 28);
                LODWORD(v29) = v12;
                v36 = 8LL;
                v37 = &v31;
                v38 = 8LL;
                v39 = &v29;
                v42 = v20;
                v44 = 16LL;
                LOBYTE(v8) = sub_18008935C(
                               (unsigned int)&dword_18015F450,
                               (unsigned int)&unk_18012BC85,
                               v18,
                               v19,
                               7,
                               (__int64)v34);
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
                v31 = *a3;
                v30 = a3[1];
                v32 = a3[2];
                v28 = 4;
                v42 = 4LL;
                v37 = &v30;
                v43 = &v28;
                v35 = &v31;
                v39 = &v32;
                v45 = (__int16 *)(v22 + 28);
                LODWORD(v29) = v12;
                v36 = 8LL;
                v38 = 8LL;
                v40 = 8LL;
                v41 = (__int16 *)&v29;
                v44 = v23;
                v46 = 16LL;
                LOBYTE(v8) = sub_18008935C(
                               (unsigned int)&dword_18015F450,
                               (unsigned int)&unk_18012BA7C,
                               v21,
                               v22,
                               8,
                               (__int64)v34);
              }
            }
          }
          else if ( (unsigned int)dword_18015F450 > 5 )
          {
            LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
            if ( (_BYTE)v8 )
            {
              v32 = *a3;
              v31 = a3[1];
              v30 = a3[2];
              v33 = a3[3];
              v28 = 4;
              v44 = 4LL;
              v37 = &v31;
              v45 = &v28;
              v35 = &v32;
              v39 = &v30;
              v47 = v25 + 28;
              LODWORD(v29) = v12;
              v36 = 8LL;
              v38 = 8LL;
              v40 = 8LL;
              v41 = (__int16 *)&v33;
              v42 = 8LL;
              v43 = (__int16 *)&v29;
              v46 = v26;
              v48 = 16LL;
              LOBYTE(v8) = sub_18008935C(
                             (unsigned int)&dword_18015F450,
                             (unsigned int)&unk_18012B7C4,
                             v24,
                             v25,
                             9,
                             (__int64)v34);
            }
          }
        }
        else if ( (unsigned int)dword_18015F450 > 5 )
        {
          LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
          if ( (_BYTE)v8 )
          {
            sub_1800D0BA0(v50, L"ResIdCount less than 2.");
            LOBYTE(v8) = sub_18008935C(
                           (unsigned int)&dword_18015F450,
                           (unsigned int)&unk_18012B6C1,
                           v16,
                           v17,
                           3,
                           (__int64)v49);
          }
        }
      }
      else if ( (unsigned int)dword_18015F450 > 5 )
      {
        LOBYTE(v8) = sub_1800062B0((__int64)&dword_18015F450, 0x400000000000LL);
        if ( (_BYTE)v8 )
        {
          sub_1800D0BA0(v50, L"Failed to retrieve service checksum.");
          LOBYTE(v8) = sub_18008935C(
                         (unsigned int)&dword_18015F450,
                         (unsigned int)&unk_18012B8F9,
                         v14,
                         v15,
                         3,
                         (__int64)v49);
        }
      }
    }
  }
  return v8;
}
