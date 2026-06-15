/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140058840
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140014AE8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3)
{
  CCrossProcessBaseEndpoint *v3; // r15
  unsigned __int8 v6; // r8
  UINT32 u32ValidFrameCount; // r14d
  unsigned int v8; // ecx
  __int64 v9; // r12
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v11; // r9
  unsigned int v12; // r10d
  __int128 v13; // xmm1
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  unsigned int v17; // r13d
  unsigned int v18; // r13d
  unsigned int v19; // r8d
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int Size; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+48h] [rbp-38h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+68h] [rbp-18h]

  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  AEWMILOG_DATA((unsigned int)this, (char *)this - 456, a3, 0xBu, a2->u32ValidFrameCount, 0LL, 0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v8 = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
  if ( u32ValidFrameCount )
  {
    if ( (v8 & 1) != 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this - 49) + 16LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v3, v9, v6) )
      {
        u32BufferFlags = a2->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v11 = *((_QWORD *)this - 48);
          v12 = *((_DWORD *)this - 94);
          v13 = *((_OWORD *)this + 7);
          v8 = *((_DWORD *)this + 4);
          v14 = u32ValidFrameCount * v12;
          v15 = *(_DWORD *)(v11 + 152) + v9 % *((unsigned int *)this - 76);
          v24 = *((_OWORD *)this + 6);
          v26 = *((_QWORD *)this + 16);
          v25 = v13;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v16 = *((_DWORD *)this + 22);
              v17 = *(_DWORD *)(v11 + 156);
              if ( !v16 )
                v16 = v14;
              if ( v16 + v15 > v17 )
              {
                v18 = v17 - v15;
                Size = v16 - v18;
                if ( u32BufferFlags != BUFFER_SILENT )
                {
                  memcpy_0((void *)(*((_QWORD *)this - 49) + v15), *((const void **)this - 44), v18);
                  memcpy_0(
                    (void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 152LL)),
                    (const void *)(v18 + *((_QWORD *)this - 44)),
                    Size);
                  u32BufferFlags = a2->u32BufferFlags;
                  v12 = *((_DWORD *)this - 94);
                }
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v15,
                  v18 / v12,
                  &v24,
                  u32BufferFlags,
                  0);
                v19 = *((_DWORD *)this - 94);
                v20 = *((float *)this - 75);
                HIDWORD(v26) = 2;
                v21 = v18 / v19;
                *(_QWORD *)&v25 = v25 - v21;
                v22 = *((_QWORD *)this - 48);
                *((_QWORD *)&v25 + 1) += (unsigned int)(int)((double)(int)v21 * 10000000.0 / v20 + 0.5);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  *(unsigned int *)(v22 + 152),
                  Size / v19,
                  &v24,
                  a2->u32BufferFlags,
                  0);
                v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v16);
              }
              else
              {
                if ( u32BufferFlags != BUFFER_SILENT )
                  memcpy_0((void *)(*((_QWORD *)this - 49) + v15), *((const void **)this - 44), v16);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v16);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v15,
                  v16 / *((_DWORD *)this - 94),
                  &v24,
                  a2->u32BufferFlags,
                  0);
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*(_QWORD *)v3 + 88LL))(
              v3,
              1LL,
              v15,
              u32ValidFrameCount,
              &v24,
              u32BufferFlags,
              1);
            if ( a2->u32BufferFlags )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v14);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v8, v3, a2->u32ValidFrameCount, 0xCu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
  SetEvent(*((HANDLE *)this - 39));
}
