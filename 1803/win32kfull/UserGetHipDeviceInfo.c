/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01B7C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C00E0D18 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  wchar_t *v23; // rax
  wchar_t *v24; // rax
  __int128 v26[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h]
  unsigned int v28; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v4 = *a1 - 4;
  v6 = v4;
  v7 = 0;
  v28 = v4;
  UserEnterUserCritSec(a1, a2, a3);
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v10 = *((_QWORD *)i + 60);
      v11 = *(_QWORD *)(v10 + 16);
      v27 = v11;
      if ( v6 )
      {
        if ( v4 < 0x450 )
        {
          v3 = -1073741789;
          break;
        }
        v12 = 276LL * v7;
        a1[v12 + 1] = *(_DWORD *)(v10 + 24);
        a1[v12 + 2] = *(_DWORD *)(v11 + 864);
        v13 = a1[v12 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v10 + 304) != 0LL ? 2 : 0);
        a1[v12 + 3] = v13;
        v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(4 * (*(int *)(v10 + 276) >> 10))) & 4;
        a1[v12 + 3] = v14;
        v15 = v14 & 0xFFFC03FF | (*(unsigned __int8 *)(v10 + 680) << 10);
        a1[v12 + 3] = v15;
        v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(8 * (*(int *)(v10 + 276) >> 4))) & 8;
        a1[v12 + 3] = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(16 * (*(int *)(v10 + 276) >> 5))) & 0x10;
        a1[v12 + 3] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(32 * (*(int *)(v10 + 276) >> 6))) & 0x20;
        a1[v12 + 3] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v10 + 276) >> 7) << 6)) & 0x40;
        a1[v12 + 3] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v10 + 276) >> 9) << 7)) & 0x80;
        a1[v12 + 3] = v20;
        v21 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 276) >> 11) << 8)) & 0x100;
        a1[v12 + 3] = v21;
        a1[v12 + 3] = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 276) >> 12) << 9)) & 0x200;
        a1[v12 + 4] = *(_DWORD *)(v11 + 1624);
        *(_OWORD *)&a1[v12 + 5] = *(_OWORD *)(v11 + 1608);
        *(_QWORD *)&a1[v12 + 9] = *(_QWORD *)(v11 + 1408);
        a1[v12 + 11] = *(_DWORD *)(v11 + 1420);
        a1[v12 + 16] = *(_DWORD *)(v11 + 1500);
        *(_QWORD *)&a1[v12 + 19] = *(_QWORD *)(v11 + 1600);
        *(_QWORD *)&a1[v12 + 17] = *(_QWORD *)(v11 + 1592);
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v12 + 85], 0x80uLL, (NTSTRSAFE_PCWSTR)(v11 + 1124));
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v12 + 149], 0x80uLL, (NTSTRSAFE_PCWSTR)(v27 + 868));
        v22 = a1[v12 + 3];
        if ( *(_QWORD *)(v27 + 856) )
        {
          a1[v12 + 3] = v22 | 1;
          *(_OWORD *)&a1[v12 + 12] = *GetMonitorRect(v26, *(_QWORD *)(v27 + 856));
        }
        else
        {
          a1[v12 + 3] = v22 & 0xFFFFFFFE;
          *(_QWORD *)&a1[v12 + 12] = 0LL;
          *(_QWORD *)&a1[v12 + 14] = 0LL;
        }
        v23 = (wchar_t *)&a1[v12];
        if ( *(_QWORD *)(v10 + 288) )
          RtlStringCbCopyUnicodeString(v23 + 42, 0x100uLL, (PCUNICODE_STRING)(v10 + 280));
        else
          v23[42] = 0;
        v24 = (wchar_t *)&a1[v12];
        if ( *(_QWORD *)(v10 + 288) )
          RtlStringCbCopyUnicodeString(v24 + 426, 0x100uLL, (PCUNICODE_STRING)(v10 + 808));
        else
          v24[426] = 0;
        v6 = v28;
        v4 -= 1104;
      }
      ++v7;
    }
  }
  CInpPushLock::UnLockShared(Lock);
  *a1 = 1104 * v7 + 4;
  UserLeaveUserCritSec();
  return v3;
}
