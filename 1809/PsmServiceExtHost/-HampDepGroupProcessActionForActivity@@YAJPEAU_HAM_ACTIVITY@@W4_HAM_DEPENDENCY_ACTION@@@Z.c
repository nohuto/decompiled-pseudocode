/*
 * XREFs of ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002D5E4
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18006AC14 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupProcessActionForActivity(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  char v5; // [rsp+38h] [rbp-19h] BYREF
  int v6; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp+7h] BYREF
  void *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  char *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  char *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]

  v2 = a2;
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v14 = 0;
    v17 = 0;
    v12 = (char *)a1 + 40;
    v5 = a2;
    v15 = &v5;
    v13 = 8;
    v16 = 1;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v8.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B6EC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 8LL;
    v8.Size = *(unsigned __int16 *)off_18009B0F8;
    v9 = &unk_18008B6F7;
    v11 = 1;
    v8.Reserved = 2;
    v10 = 44;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &v8);
  }
  if ( v2 == 1 )
  {
    result = HampActStartAsync((__int64)a1, 0, &v6, 0LL);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( v2 == 2 )
  {
LABEL_12:
    HampActStop(a1, a2);
    return 0LL;
  }
  if ( v2 != 3 )
  {
    if ( v2 != 4 )
      return 0LL;
    goto LABEL_12;
  }
  HampActClose(a1, a2);
  return 0LL;
}
