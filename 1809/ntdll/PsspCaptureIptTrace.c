/*
 * XREFs of PsspCaptureIptTrace @ 0x18011244C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180111A70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     GetProcessIptTrace @ 0x180114E54 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180114F78 (GetProcessIptTraceSize.c)
 */

__int64 __fastcall PsspCaptureIptTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v5; // rbx
  int v6; // esi
  int ProcessIptTrace; // ebx
  int v8; // eax
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h]

  LODWORD(Size) = 0;
  Handle = 0LL;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      result = NtCreateSection();
      if ( (int)result >= 0 )
      {
        v6 = ZwMapViewOfSection();
        if ( v6 >= 0 )
        {
          memset(0LL, 0, v5);
          ProcessIptTrace = GetProcessIptTrace(a2, 0LL, (unsigned int)v5);
          if ( ProcessIptTrace >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = Handle;
            v8 = MEMORY[4];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v8 + 8;
            NtUnmapViewOfSection();
            return 0LL;
          }
          else
          {
            NtUnmapViewOfSection();
            NtClose(Handle);
            return (unsigned int)ProcessIptTrace;
          }
        }
        else
        {
          NtClose(Handle);
          return (unsigned int)v6;
        }
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
