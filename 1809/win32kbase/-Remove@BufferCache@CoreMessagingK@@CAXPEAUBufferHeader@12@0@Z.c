/*
 * XREFs of ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C0036A5C
 * Callers:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C00368F4 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C0036998 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::BufferCache::Remove(
        struct CoreMessagingK::BufferCache::BufferHeader *a1,
        struct CoreMessagingK::BufferCache::BufferHeader *a2)
{
  if ( a2 )
    *((_QWORD *)a2 + 1) = *((_QWORD *)a1 + 1);
  else
    CoreMessagingK::BufferCache::s_FreeList = (PVOID)*((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = 0LL;
}
