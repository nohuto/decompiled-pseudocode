/*
 * XREFs of ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x1C009F274
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C009F154 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall InitializeWppRecorder(struct RECORDER_LOG__ **a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  _BYTE *v6; // rcx
  char v7; // al
  _BYTE *v8; // rax
  _QWORD v10[6]; // [rsp+20h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  v10[0] = 48LL;
  HIDWORD(v10[1]) = 200;
  LOBYTE(v10[4]) = 0;
  v10[2] = 0LL;
  LOBYTE(v10[3]) = 0;
  v4 = 16LL;
  HIDWORD(v10[3]) = 16;
  if ( a2 )
  {
    v5 = a2 - (char *)&v10[4];
    v6 = &v10[4];
    do
    {
      if ( v4 == -2147483630 )
        break;
      v7 = v6[v5];
      if ( !v7 )
        break;
      *v6++ = v7;
      --v4;
    }
    while ( v4 );
    v8 = v6 - 1;
    if ( v4 )
      v8 = v6;
    *v8 = 0;
  }
  LODWORD(v10[1]) = 4096;
  return imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v10, a1);
}
