/*
 * XREFs of StorSqmAddToStream @ 0x1C0053420
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C003C6EC (RaSqmLogScsiPassthroughStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

NTSTATUS __fastcall StorSqmAddToStream(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // r11d
  _QWORD *v12; // rdx
  void *v13; // r10
  __int64 v14; // rcx
  wchar_t *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+480h] [rbp+378h] BYREF
  unsigned int v23; // [rsp+488h] [rbp+380h] BYREF

  v23 = a3;
  v22 = a2;
  v20 = 11;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( byte_1C00618B9 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (unsigned __int64)&v20;
    UserData[1].Ptr = (unsigned __int64)&unk_1C0061340;
    UserData[2].Ptr = (unsigned __int64)&v22;
    UserData[3].Ptr = (unsigned __int64)&v23;
    v7 = 0;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    for ( *(_QWORD *)&UserData[3].Size = 4LL; v7 < a3; UserData[v19].Reserved = 0 )
    {
      v8 = 3 * v7;
      if ( 3 * v7 + 6 >= 0x40 )
        break;
      v9 = (unsigned int)(v8 + 4);
      v10 = (_DWORD *)(a4 + 16LL * v7);
      UserData[v9].Ptr = (unsigned __int64)v10;
      v11 = *v10;
      *(_QWORD *)&UserData[v9].Size = 4LL;
      v12 = v10 + 2;
      v13 = v10 + 2;
      if ( v11 != 1 )
        v13 = &unk_1C005AD48;
      v14 = (unsigned int)(v8 + 5);
      UserData[v14].Ptr = (unsigned __int64)v13;
      *(_QWORD *)&UserData[v14].Size = 4LL;
      v15 = v11 == 2 ? (wchar_t *)*v12 : L"0";
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      v17 = 2 * v16 + 2;
      v18 = v7 + 2;
      ++v7;
      v19 = 3LL * v18;
      UserData[v19].Ptr = (unsigned __int64)v15;
      UserData[v19].Size = v17;
    }
    return EtwWrite(qword_1C00618E8, &SQM_ADD_STREAMROW, 0LL, 0x40u, UserData);
  }
  return result;
}
