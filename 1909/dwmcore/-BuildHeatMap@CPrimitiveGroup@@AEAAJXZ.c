/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801C4310
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18007ACE0 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18007CCE4 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C48 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180168AD4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  int v1; // ebx
  unsigned int v3; // esi
  _QWORD *v4; // r14
  signed int v5; // eax
  __int64 v6; // rcx
  void *v7; // rax
  _QWORD *v8; // r15
  signed int v9; // eax
  __int64 v10; // rcx
  void *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rcx

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 63) && *((_QWORD *)this + 65) )
  {
    v4 = (_QWORD *)((char *)this + 672);
    v5 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 128), (struct ID2D1PrivateCompositorBuffer **)this + 84);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x60Fu, 0LL);
    }
    else
    {
      v7 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v7, *((const void **)this + 63), *((_QWORD *)this + 64));
      v8 = (_QWORD *)((char *)this + 680);
      v9 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 132), (struct ID2D1PrivateCompositorBuffer **)this + 85);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x614u, 0LL);
      }
      else
      {
        v11 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        memcpy_0(v11, *((const void **)this + 65), *((_QWORD *)this + 66));
        v12 = 0;
        v13 = *((_QWORD *)this + 64);
        v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        v15 = 0;
        while ( 1 )
        {
          v12 += 144;
          if ( v15 + 144 > (unsigned int)v13 )
            break;
          v16 = v15;
          v15 = v12;
          v17 = (_DWORD *)(v14 + v16);
          v17[1] &= ~0x10u;
          v17[2] = -1;
          v17[3] = 0;
          v17[10] = -1;
          v17[14] = -1;
        }
        v18 = *((_QWORD *)this + 66);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        v20 = 0;
        while ( 1 )
        {
          v21 = v1 + 148;
          if ( v20 + 148 > (unsigned int)v18 )
            break;
          v22 = v20;
          v1 += 148;
          v20 = v21;
          *(_OWORD *)(v22 + v19 + 48) = *((_OWORD *)this + 41);
          *(_DWORD *)(v22 + v19 + 144) = -1;
        }
      }
    }
  }
  return v3;
}
