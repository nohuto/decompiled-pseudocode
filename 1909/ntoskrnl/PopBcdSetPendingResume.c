/*
 * XREFs of PopBcdSetPendingResume @ 0x140728C24
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14073E940 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x14074174C (PopBcdSetupResumeObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int Object; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int16 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  v16[0] = 0LL;
  v16[1] = 0LL;
  v15 = 0LL;
  Object = PopBcdSetupResumeObject(a4);
  if ( Object >= 0 )
  {
    v14 = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags(a4, 637534214LL, v7, &v14, 2);
    Object = BcdQueryObject(a4, 0LL, 0LL, v16);
    if ( Object >= 0 )
    {
      v8 = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v15);
      v10 = v15;
      Object = v8;
      if ( v8 >= 0 )
      {
        Object = BcdSetElementDataWithFlags(v15, 587202566LL, v9, v16, 16);
        if ( Object >= 0 )
        {
          v14 = 1;
          Object = BcdSetElementDataWithFlags(v10, 637534213LL, v11, &v14, 2);
          if ( Object >= 0 )
          {
            v14 = (unsigned __int8)byte_1404433C0;
            Object = BcdSetElementDataWithFlags(v10, 637534245LL, v12, &v14, 2);
            if ( Object >= 0 )
              Object = 0;
          }
        }
      }
      if ( v10 )
        BcdCloseObject(v10);
    }
  }
  return (unsigned int)Object;
}
