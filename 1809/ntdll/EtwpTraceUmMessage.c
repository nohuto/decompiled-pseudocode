/*
 * XREFs of EtwpTraceUmMessage @ 0x18008C36C
 * Callers:
 *     EtwTraceMessageVa @ 0x18004EB50 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18004E604 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmMessage(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // r13d
  char v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // rsi
  _QWORD *i; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  signed __int32 v17; // ecx
  volatile signed __int32 *v18; // rdx
  int v19; // eax
  signed __int32 *v20; // rdi
  struct _TEB *v21; // rcx
  __int64 v22; // rsi
  const void *v23; // rdx
  size_t v24; // rbx
  signed __int32 *v25; // [rsp+30h] [rbp-98h]
  unsigned int v26; // [rsp+38h] [rbp-90h] BYREF
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  signed __int32 v29; // [rsp+50h] [rbp-78h]
  int v30; // [rsp+54h] [rbp-74h]
  int v31; // [rsp+58h] [rbp-70h]
  int v32; // [rsp+5Ch] [rbp-6Ch]
  int v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h] BYREF
  signed __int32 UniqueThread; // [rsp+78h] [rbp-50h]
  signed __int32 UniqueProcess; // [rsp+7Ch] [rbp-4Ch]
  __int64 v38; // [rsp+80h] [rbp-48h]
  struct _TEB *v39; // [rsp+88h] [rbp-40h]
  const void *v40; // [rsp+90h] [rbp-38h]
  unsigned int v41; // [rsp+D0h] [rbp+8h]

  v34 = 0LL;
  v26 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) >= 0x40 && (result = EtwpDemuxUmTraceHandle(a1, &v26), (_DWORD)result) )
  {
    v8 = v27;
  }
  else
  {
    v9 = 2LL * v26;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v26 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
    if ( (*(_BYTE *)(EtwpLoggerArray + 8 * v9) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v9 + 8));
      return 4201LL;
    }
    v27 = *(_QWORD *)(EtwpLoggerArray + 8 * v9);
    result = 0LL;
  }
  v41 = result;
  if ( !(_DWORD)result )
  {
    v10 = a2 & 0x18;
    v11 = a2 & 0xFE;
    if ( *(_QWORD *)(v8 + 400) )
      v11 = a2;
    v30 = v11 & 1;
    v32 = v11 & 2;
    v31 = v11 & 4;
    v33 = v11 & 0x20;
    v12 = (v10 != 0 ? 8 : 0) + (v32 != 0 ? 0x10 : 0) + (v31 != 0 ? 4 : 0) + (v33 != 0 ? 16 : 8) + 4 * v30;
    v13 = (__int64)a5;
    for ( i = a5; ; v12 += *((_DWORD *)i - 2) )
    {
      v28 = (__int64)i;
      if ( !*i )
        break;
      i += 2;
      if ( v12 + *((_DWORD *)i - 2) < v12 )
        return 534LL;
    }
    v39 = NtCurrentTeb();
    v15 = v27;
    v16 = EtwpReserveTraceBuffer(
            v27,
            v12,
            v39->CurrentIdealProcessor.Reserved,
            (LARGE_INTEGER *)((unsigned __int64)&v34 & -(__int64)(v10 != 0)),
            &v35);
    v38 = v16;
    v17 = 0;
    v29 = 0;
    v18 = *(volatile signed __int32 **)(v8 + 400);
    if ( v18 )
    {
      v17 = _InterlockedIncrement(v18);
      v29 = v17;
      v15 = v27;
      v16 = v38;
    }
    if ( !v16 )
    {
      if ( v12 <= 0xFFF8 )
        v19 = *(_DWORD *)(v15 + 212) < v12 ? 234 : 8;
      else
        v19 = 534;
      v41 = v19;
LABEL_40:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v15 + 20) + 8));
      return v41;
    }
    *(_DWORD *)v16 = -1879048192;
    *(_WORD *)v16 = v12;
    *(_WORD *)(v16 + 6) = v11 & 0x3F | 0x80;
    *(_WORD *)(v16 + 4) = a4;
    v20 = (signed __int32 *)(v16 + 8);
    v25 = (signed __int32 *)(v16 + 8);
    if ( v30 )
    {
      *v20 = v17;
      v20 = (signed __int32 *)(v16 + 12);
      v25 = (signed __int32 *)(v16 + 12);
    }
    if ( v31 )
    {
      *v20++ = *a3;
    }
    else
    {
      if ( !v32 )
      {
LABEL_32:
        if ( v10 )
        {
          *(_QWORD *)v20 = v34;
          v20 += 2;
          v25 = v20;
        }
        if ( v33 )
        {
          v21 = NtCurrentTeb();
          UniqueThread = (signed __int32)v21->ClientId.UniqueThread;
          *v25 = UniqueThread;
          UniqueProcess = (signed __int32)v21->ClientId.UniqueProcess;
          v25[1] = UniqueProcess;
          v20 = v25 + 2;
        }
        v28 = (__int64)a5;
        while ( 1 )
        {
          v22 = v13 + 8;
          v28 = v22;
          v23 = *(const void **)(v22 - 8);
          v40 = v23;
          if ( !v23 )
            break;
          v13 = v22 + 8;
          v28 = v13;
          v24 = *(_QWORD *)(v13 - 8);
          memmove(v20, v23, v24);
          v20 = (signed __int32 *)((char *)v20 + v24);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
        v15 = v27;
        goto LABEL_40;
      }
      *(_OWORD *)v20 = *(_OWORD *)a3;
      v20 += 4;
    }
    v25 = v20;
    goto LABEL_32;
  }
  return result;
}
