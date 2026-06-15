/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800171C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CProcess::GetEndpointVolumeOverridePolicyVolume(CProcess *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  float v5; // xmm6_4
  double v6; // xmm0_8
  struct TSSession *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 45);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v5 = FLOAT_1_0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(v3, 1, 0LL, &v8) )
  {
    v6 = (*(double (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v8 + 32) + 24LL))(
           *((_QWORD *)v8 + 32),
           a2);
    v5 = *(float *)&v6;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
