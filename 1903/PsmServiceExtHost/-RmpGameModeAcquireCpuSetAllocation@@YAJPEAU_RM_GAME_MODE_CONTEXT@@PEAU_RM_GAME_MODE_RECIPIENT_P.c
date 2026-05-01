/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180068CD4 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r9d
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_CPU_SET_ALLOCATION *v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+E8h] [rbp-18h]
  unsigned int v17; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v19; // [rsp+110h] [rbp+10h]
  int v20; // [rsp+118h] [rbp+18h]
  int v21; // [rsp+11Ch] [rbp+1Ch]
  int *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  struct _RM_CPU_SET_ALLOCATION **v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]
  char *v28; // [rsp+140h] [rbp+40h]
  int v29; // [rsp+148h] [rbp+48h]
  int v30; // [rsp+14Ch] [rbp+4Ch]

  v2 = *((_DWORD *)a2 + 29);
  if ( v2 )
  {
    memset_0(&v14, 0, 0xACuLL);
    v5 = *((_QWORD *)a2 + 15);
    v13 = v2;
    if ( v5 )
    {
      v16 |= 1u;
      v15 = v5;
    }
    v6 = *((_DWORD *)a2 + 35);
    v17 = v17 & 0xFFFFFFFD | ((v6 & 0x20 | 0x50) >> 4);
    if ( (v6 & 0x80u) != 0 )
      v14 |= 2u;
    RmpAcquireGlobalLock();
    v10 = RmpCpuSetManagerAcquireCpuSets(a1[5], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&v13, (v6 >> 6) & 1, &v12);
    if ( v10 >= 0 )
    {
      v10 = 0;
      a1[15] = (struct _RM_CPU_SET_MANAGER **)v12;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    v10 = 255;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v10;
    v11 = *((_DWORD *)a2 + 27);
    v22 = &v11;
    LODWORD(v12) = *((_DWORD *)a2 + 29);
    v25 = &v12;
    v28 = (char *)a2 + 120;
    v20 = v8;
    v23 = v8;
    v26 = v8;
    v29 = 8;
    TlgWrite(v7, &unk_1800947E4, 0LL, 0LL, 6u, &pData);
  }
  return (unsigned int)v10;
}
