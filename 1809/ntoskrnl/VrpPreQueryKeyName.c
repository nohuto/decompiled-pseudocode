/*
 * XREFs of VrpPreQueryKeyName @ 0x14080D9A0
 * Callers:
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  _WORD *v7; // r15
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // edi
  void *v11; // r13
  _QWORD v13[3]; // [rsp+30h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  int *v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp-48h]
  int v19; // [rsp+98h] [rbp-40h] BYREF
  int v20; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v21; // [rsp+A0h] [rbp-38h]
  __int64 v22; // [rsp+A8h] [rbp-30h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v13[1] = v2;
  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( stru_140400AD8.LevelPlus1 > 2 )
  {
    v4 = (unsigned __int16 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v4 = (unsigned __int16 *)&EmptyUnicodeString;
    v5 = *v4;
    v6 = *((_QWORD *)v4 + 1);
    v16 = &v19;
    v17 = 2LL;
    v18 = v6;
    v19 = v5;
    v20 = 0;
    TlgWrite(&stru_140400AD8, &unk_14036DD9D, &ActivityId, 0LL, 4u, &pData);
  }
  v7 = (_WORD *)(v2 + 16);
  v13[2] = v2 + 16;
  v8 = (unsigned __int16 *)(v2 + 16);
  v13[0] = v2 + 16;
  v9 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v9;
  if ( *(_DWORD *)(a1 + 16) >= v9 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v11, *(const void **)(v2 + 24), (unsigned __int16)*v7);
    *((_WORD *)v11 + ((unsigned __int64)(unsigned __int16)*v7 >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *v7;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v11;
    v10 = -1073740541;
    v8 = (unsigned __int16 *)v13[0];
  }
  else
  {
    v10 = -1073741820;
  }
  if ( stru_140400AD8.LevelPlus1 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = v8;
    LODWORD(v13[0]) = v10;
    v16 = &v19;
    v17 = 2LL;
    v18 = *((_QWORD *)v3 + 1);
    v19 = *v3;
    v20 = 0;
    v21 = v13;
    v22 = 4LL;
    TlgWrite(&stru_140400AD8, &unk_14036DC65, &ActivityId, 0LL, 5u, &pData);
  }
  return v10;
}
