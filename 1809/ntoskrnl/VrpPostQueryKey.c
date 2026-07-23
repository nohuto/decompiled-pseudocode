/*
 * XREFs of VrpPostQueryKey @ 0x14080C440
 * Callers:
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x1400DDCF0 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VrpCleanupBufferParameter @ 0x1408095C4 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1408096C8 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1408096F8 (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x14080E174 (VrpUpdateKeyInformation.c)
 */

__int64 __fastcall VrpPostQueryKey(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KPROCESSOR_MODE PreviousMode; // al
  int v5; // ebx
  unsigned __int16 *v6; // r13
  char v7; // di
  unsigned int v8; // eax
  int v9; // ecx
  unsigned __int16 *v10; // rcx
  int v11; // eax
  int updated; // eax
  int v13; // eax
  int v15; // eax
  bool v16; // zf
  unsigned __int16 *v17; // rcx
  int v18; // [rsp+38h] [rbp-69h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h] BYREF
  void *v20; // [rsp+48h] [rbp-59h] BYREF
  void *v21; // [rsp+50h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+88h] [rbp-19h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  _QWORD *v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v28; // [rsp+A8h] [rbp+7h]
  _QWORD v29[3]; // [rsp+B0h] [rbp+Fh] BYREF

  v19 = a1;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  PreviousMode = ExGetPreviousMode();
  v5 = *(_DWORD *)(a1 + 8);
  v6 = (unsigned __int16 *)&EmptyUnicodeString;
  v21 = 0LL;
  v7 = PreviousMode;
  if ( v5 < 0 && v5 != -1073741789 && v5 != -2147483643 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 > 8 )
    goto LABEL_22;
  v9 = 283;
  if ( !_bittest(&v9, v8) )
    goto LABEL_22;
  if ( stru_140400AD8.LevelPlus1 > 5 )
  {
    v10 = (unsigned __int16 *)(v2 + 16);
    v18 = *(_DWORD *)(v3 + 8);
    if ( !*(_QWORD *)(v2 + 24) )
      v10 = (unsigned __int16 *)&EmptyUnicodeString;
    v25 = 4LL;
    v24 = (__int64 *)&v18;
    v26 = v29;
    v28 = (__int64 *)*((_QWORD *)v10 + 1);
    v29[0] = *v10;
    v27 = 2LL;
    TlgWrite(&stru_140400AD8, &unk_14036DA07, &ActivityId, 0LL, 5u, &pData);
  }
  if ( (*(_DWORD *)(v2 + 36) & 0x20000000) == 0 )
  {
    v11 = *(_DWORD *)(v3 + 8);
    if ( v11 != 3 && v11 != 8 )
      goto LABEL_22;
  }
  v5 = VrpProcessBufferParameter(v7, *(_QWORD *)(v3 + 16), *(_DWORD *)(v3 + 24), &v20);
  if ( v5 >= 0 )
  {
    v5 = VrpOutputBufferParameter(v7, v20, *(_DWORD *)(v3 + 24), (const void **)(v3 + 16));
    if ( v5 >= 0 )
    {
      v5 = VrpProcessBufferParameter(v7, *(_QWORD *)(v3 + 32), 4u, &v21);
      if ( v5 >= 0 )
      {
        v5 = VrpOutputBufferParameter(v7, v21, 4u, (const void **)(v3 + 32));
        if ( v5 >= 0 )
        {
          updated = VrpUpdateKeyInformation(
                      *(unsigned int *)(v3 + 8),
                      v20,
                      *(unsigned int *)(v3 + 24),
                      v21,
                      v2 + 16,
                      *(_DWORD *)(v2 + 36));
          v18 = updated;
          v5 = updated;
          if ( updated >= 0 || updated == -2147483643 || updated == -1073741789 )
          {
            v13 = VrpOutputBufferParameter(v7, *(void **)(v3 + 16), *(_DWORD *)(v3 + 24), (const void **)&v20);
            if ( v13 >= 0 )
            {
              v15 = VrpOutputBufferParameter(v7, *(void **)(v3 + 32), 4u, (const void **)&v21);
              if ( v15 >= 0 )
              {
                *(_DWORD *)(v19 + 24) = v5;
                v5 = -1073740541;
                if ( stru_140400AD8.LevelPlus1 <= 5 )
                  goto LABEL_28;
                v16 = *(_QWORD *)(v2 + 24) == 0LL;
                v17 = (unsigned __int16 *)&EmptyUnicodeString;
                v25 = 2LL;
                if ( !v16 )
                  v17 = (unsigned __int16 *)(v2 + 16);
                HIDWORD(v27) = 0;
                LODWORD(v19) = *(_DWORD *)(v3 + 8);
                v24 = &v27;
                v26 = (_QWORD *)*((_QWORD *)v17 + 1);
                LODWORD(v27) = *v17;
                v28 = &v19;
                v29[1] = &v18;
                v29[0] = 4LL;
                v29[2] = 4LL;
                TlgWrite(&stru_140400AD8, &unk_14036DB69, &ActivityId, 0LL, 6u, &pData);
              }
              else
              {
                v5 = v15;
              }
            }
            else
            {
              v5 = v13;
            }
          }
LABEL_22:
          if ( v5 >= 0 )
            goto LABEL_28;
        }
      }
    }
  }
  if ( v5 != -1073740541 && stru_140400AD8.LevelPlus1 > 2 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v6 = (unsigned __int16 *)(v2 + 16);
    LODWORD(v19) = v5;
    v24 = &v27;
    v26 = (_QWORD *)*((_QWORD *)v6 + 1);
    v27 = *v6;
    v28 = &v19;
    v25 = 2LL;
    v29[0] = 4LL;
    TlgWrite(&stru_140400AD8, &unk_14036D9CC, &ActivityId, 0LL, 5u, &pData);
  }
LABEL_28:
  VrpCleanupBufferParameter(v7, &v20);
  VrpCleanupBufferParameter(v7, &v21);
  return (unsigned int)v5;
}
