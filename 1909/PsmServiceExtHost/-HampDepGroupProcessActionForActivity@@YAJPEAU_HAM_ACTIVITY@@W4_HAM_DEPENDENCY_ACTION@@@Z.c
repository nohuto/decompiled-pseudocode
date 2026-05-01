/*
 * XREFs of ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180034C30
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180078764 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180034DA0 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupProcessActionForActivity(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  char v5; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-15h]
  int v7; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+7h] BYREF
  void *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  char *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  char *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  v2 = a2;
  if ( dword_1800AB2C0 > 4u )
  {
    a2 = 8LL;
    if ( (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
    {
      v15 = 0;
      v18 = 0;
      v13 = (char *)a1 + 40;
      v16 = &v5;
      v14 = 8;
      v5 = v2;
      v17 = 1;
      *(_DWORD *)&EventDescriptor.Level = 4;
      v9.Ptr = (ULONGLONG)off_1800AB2C8;
      EventDescriptor.Keyword = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      v9.Size = *(unsigned __int16 *)off_1800AB2C8;
      v10 = &unk_18009930C;
      v12 = 1;
      v9.Reserved = 2;
      v11 = 44;
      v6 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &v9);
    }
  }
  if ( v2 == 1 )
  {
    result = HampActStartAsync((__int64)a1, 0, &v7, 0LL);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( v2 != 2 )
  {
    if ( v2 == 3 )
    {
      HampActClose(a1, a2);
      return 0LL;
    }
    if ( v2 != 4 )
      return 0LL;
  }
  HampActStop(a1);
  return 0LL;
}
