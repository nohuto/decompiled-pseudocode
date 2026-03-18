/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01EFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C01EE0CC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v6; // r13d
  unsigned int v7; // r12d
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
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  char *v25; // rax
  char *v26; // rax
  __int128 v28[4]; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v4 = *a1 - 4;
  v29 = v4;
  v6 = v4;
  v7 = 0;
  UserEnterUserCritSec(a1, a2, a3);
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v10 = *((_QWORD *)i + 60);
      v11 = *(_QWORD *)(v10 + 16);
      v30 = v11;
      if ( v4 )
      {
        if ( v6 < 0x450 )
        {
          v3 = -1073741789;
          break;
        }
        v12 = 276LL * v7;
        a1[v12 + 1] = *(_DWORD *)(v10 + 24);
        a1[v12 + 2] = *(_DWORD *)(v11 + 1336);
        v13 = a1[v12 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v10 + 344) != 0LL ? 2 : 0);
        a1[v12 + 3] = v13;
        v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v10 + 312)))) & 4;
        a1[v12 + 3] = v14;
        v15 = v14 & 0xFFFC03FF | (*(unsigned __int8 *)(v10 + 720) << 10);
        a1[v12 + 3] = v15;
        v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(8 * (*(int *)(v10 + 312) >> 2))) & 8;
        a1[v12 + 3] = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(16 * (*(int *)(v10 + 312) >> 3))) & 0x10;
        a1[v12 + 3] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(32 * (*(int *)(v10 + 312) >> 4))) & 0x20;
        a1[v12 + 3] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v10 + 312) >> 5) << 6)) & 0x40;
        a1[v12 + 3] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ *(_DWORD *)(v10 + 312) & 0x80) & 0x80;
        a1[v12 + 3] = v20;
        v21 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 312) >> 9) << 8)) & 0x100;
        a1[v12 + 3] = v21;
        a1[v12 + 3] = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 312) >> 10) << 9)) & 0x200;
        a1[v12 + 4] = *(_DWORD *)(v11 + 2104);
        *(_OWORD *)&a1[v12 + 5] = *(_OWORD *)(v11 + 2088);
        *(_QWORD *)&a1[v12 + 9] = *(_QWORD *)(v11 + 1888);
        a1[v12 + 11] = *(_DWORD *)(v11 + 1900);
        a1[v12 + 16] = *(_DWORD *)(v11 + 1980);
        *(_QWORD *)&a1[v12 + 19] = *(_QWORD *)(v11 + 2080);
        *(_QWORD *)&a1[v12 + 17] = *(_QWORD *)(v11 + 2072);
        RtlStringCchCopyW((char *)&a1[v12 + 85], 128LL, (char *)(v11 + 1596));
        RtlStringCchCopyW((char *)&a1[v12 + 149], 128LL, (char *)(v30 + 1340));
        v22 = *(_QWORD *)(v30 + 1328);
        if ( v22 )
          v23 = ValidateHmonitorNoRip(v22);
        else
          v23 = 0LL;
        v24 = a1[v12 + 3];
        if ( v23 )
        {
          a1[v12 + 3] = v24 | 1;
          *(_OWORD *)&a1[v12 + 12] = *GetMonitorRect(v28, v23);
        }
        else
        {
          a1[v12 + 3] = v24 & 0xFFFFFFFE;
          *(_QWORD *)&a1[v12 + 12] = 0LL;
          *(_QWORD *)&a1[v12 + 14] = 0LL;
        }
        v25 = (char *)&a1[v12];
        if ( *(_QWORD *)(v10 + 328) )
          RtlStringCbCopyUnicodeString(v25 + 84, 0x100uLL, (const struct _UNICODE_STRING *)(v10 + 320));
        else
          *((_WORD *)v25 + 42) = 0;
        v26 = (char *)&a1[v12];
        if ( *(_QWORD *)(v10 + 328) )
          RtlStringCbCopyUnicodeString(v26 + 852, 0x100uLL, (const struct _UNICODE_STRING *)(v10 + 848));
        else
          *((_WORD *)v26 + 426) = 0;
        v4 = v29;
        v6 -= 1104;
      }
      ++v7;
    }
  }
  CInpPushLock::UnLockShared(Lock);
  *a1 = 1104 * v7 + 4;
  UserLeaveUserCritSec();
  return v3;
}
