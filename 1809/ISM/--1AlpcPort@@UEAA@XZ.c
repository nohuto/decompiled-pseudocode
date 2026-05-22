/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x18009FF0C
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18009FED0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800A0870 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AlpcPort::~AlpcPort(AlpcPort *this)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  char *v8; // rcx
  char *v9; // rcx

  *(_QWORD *)this = &AlpcPort::`vftable';
  AlpcPort::Disconnect(this);
  v2 = (__int64 **)((char *)this + 48);
  while ( 1 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
LABEL_6:
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 == (__int64 *)v2 )
      break;
    operator delete(v3, (const struct std::nothrow_t *)0x30);
    --*((_QWORD *)this + 8);
  }
  v5 = (__int64 **)((char *)this + 24);
  while ( 1 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      goto LABEL_6;
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    if ( v6 == (__int64 *)v5 )
      break;
    operator delete(v6, (const struct std::nothrow_t *)0x30);
    --*((_QWORD *)this + 5);
  }
  v8 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  v9 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  *(_QWORD *)this = &SipcPort::`vftable';
}
