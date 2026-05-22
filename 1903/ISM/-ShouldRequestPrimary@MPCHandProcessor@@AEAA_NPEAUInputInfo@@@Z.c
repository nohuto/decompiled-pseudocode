/*
 * XREFs of ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180136984
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x180133F14 (_lambda_3cd376e3a20bdc9f6b19457eb0f70b96_--operator().c)
 *     ?IsStartOfCapture@MPCHandProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180135820 (-IsStartOfCapture@MPCHandProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 */

char __fastcall MPCHandProcessor::ShouldRequestPrimary(
        MPCHandProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl
  char v7; // al
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  struct InputInfo *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = 0;
  if ( byte_1801E18E8 )
  {
    if ( MPCHandProcessor::IsStartOfCapture((unsigned __int64)this + 24, a2, a3, a4)
      || (v7 = 0, *((_QWORD *)this + 574)) )
    {
      v7 = 1;
    }
    v8[0] = this;
    v8[1] = &v9;
    if ( v7 || lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator()((__int64)v8) )
      return 1;
    return v4;
  }
  else
  {
    byte_1801E18E8 = 1;
    return 1;
  }
}
