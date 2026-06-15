/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180046520
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // edi
  int v12; // [rsp+30h] [rbp-29h] BYREF
  int v13; // [rsp+34h] [rbp-25h] BYREF
  int v14; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  int *v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  int *v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v7 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 52) + 32LL))(*((_QWORD *)this + 52), &v14);
      v10 = v12;
      if ( v12 < 0 )
      {
        if ( (unsigned int)dword_1801B53C0 > 2 )
        {
          v17 = 63LL;
          v16 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
          v13 = 855;
          v18 = &v13;
          v19 = 4LL;
          v20 = &v12;
          v21 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v8, v9, 5u, &pData);
        }
      }
      else
      {
        if ( !v14 )
          v7 = *((_DWORD *)this + 125);
        *(_DWORD *)a2 = v7;
      }
    }
    else
    {
      v10 = -2147024809;
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v17 = 63LL;
        v16 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
        v13 = 851;
        v18 = &v13;
        v19 = 4LL;
        v12 = -2147024809;
        v20 = &v12;
        v21 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v5, v6, 5u, &pData);
      }
    }
  }
  else
  {
    v10 = -2147418113;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v17 = 63LL;
      v16 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      v12 = 850;
      v18 = &v12;
      v19 = 4LL;
      v13 = -2147418113;
      v20 = &v13;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v5, v6, 5u, &pData);
    }
  }
  return v10;
}
