/*
 * XREFs of ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C015AF1C
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C015A8A4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall RIMDeadzone::SetDeadzonePalmTelemetry(RIMDeadzone *this)
{
  unsigned int v1; // ebx
  char *v3; // rax
  char *v4; // rdi

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = (char *)Win32AllocPoolZInit(0x300CuLL, 2053394514LL);
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 4) = 0LL;
      *(_DWORD *)v3 = 0;
      memset(v3 + 2060, 0, 0x2800uLL);
      memset(v4 + 13, 0, 0x7FFuLL);
      v4[12] = 0;
      *((_QWORD *)this + 7) = v4;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
